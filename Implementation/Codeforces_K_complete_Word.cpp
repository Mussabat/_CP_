#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ll mx = 1e7 + 8;

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

int main() {
    FIO;
    ll t; cin >> t;
    while(t--) {
     ll n, k; cin >> n >> k;
     string s; cin >> s;
     ll ans = 0;
     for(ll i = 0; i < k / 2; i++) {
        ll cnt[26] = {0};
        for(ll j = 0; j + k - 1 < n; j += k) {
            ll i1 = j + i;
            ll i2 = j + (k - i - 1);

            cnt[s[i1] - 'a']++;
            cnt[s[i2] - 'a']++;

        }

        ll mx = 2 * (n / k);

        ll ac = *max_element(cnt, cnt + 26);
        ans += (mx - ac);

     }

     if(k & 1) {
        ll cnt[26] = {0};
        for(ll i = k / 2; i < n; i += k) {
           cnt[s[i] - 'a']++;
        }

        ll mx = n / k;
        ll ac = *max_element(cnt, cnt + 26);
        ans += (mx - ac);

     }

     cout << ans << '\n';
    }

    return 0;
}


