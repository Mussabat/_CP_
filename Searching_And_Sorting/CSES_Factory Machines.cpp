#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 2e5 + 3;

ll n;
ll t;
ll a[mx];
bool ok(ll mid) {
    ll mot = 0;
    for(ll i = 0; i < n; i++) {
        mot += (mid / a[i]);
        if(mot >= t) return 1;

    }
    return 0;
}
int main() {
    cin >> n >> t;
    for(ll i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    ll h = (t * a[n - 1]);
    ll l = 0;
    ll m;
    ll ans;
    while(l <= h) {
        m = (l + h) / 2;
        if(ok(m)) {
            ans = m;
            h = m - 1;
        } else l = m + 1;
    }
    cout << ans << '\n';
    return 0;
}
