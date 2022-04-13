#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

const ll mx = 1e6;
ll n;
ll a[mx];

ll solve(ll x) {
    ll even = 0;
    ll odd = 0;
    for(ll i = 0; i < n; i++) {
        even += (x - a[i]) / 2;
        odd += (x - a[i]) % 2;
    }
    if(odd > even) {
        return (odd * 2) - 1;
    } else {
        ll lo = 0;
        ll hi = even - odd;
        ll d = hi;
        ll p = odd * 2;
        ll ans = p + (d * 2);
        while(lo <= hi) {
            ll m = (lo + hi) / 2;
            ll tot_even = (m/2) + (m - 1);
            if(tot_even >= d) {
                ans = min(ans, p + m + (m - 1));
                hi = m - 1;
            } else if(tot_even + 1 >= d) {
                ans = min(ans, p + m + (m));
                hi = m - 1;
            } else {
                lo = m + 1;
            }

        }
        return ans;
    }
}

int main() {
    FIO;
    ll t;
    cin >> t;
    while(t--) {
        cin >> n;
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        ll ans = (solve(a[n - 1]));
        ans = min(ans, solve(a[n - 1] + 1));
        cout << ans << '\n';

    }
    return 0;
}

