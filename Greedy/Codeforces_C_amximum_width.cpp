#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ll mx = 1e7 + 8;

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

int main() {
    //FIO;
    ll t;
    t = 1;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        string p;
        cin >> p;
        ll lft[n + 2] = {0};
        ll rgt[n + 2] = {0};
        ll j = 0;
        for(ll i = 0; i < m; i++) {
           while(s[j] != p[i]) {
            j++;
           }
           lft[i] = j;
           j++;
        }


        j = n - 1;
        for(ll i = m - 1; i >= 0; i--) {
            while(s[j] != p[i]) {
                j--;
            }
            rgt[i] = j;
            j--;
        }

        ll ans = 0;

        for(ll i = 1; i < m; i++) {
          ans = max(ans, rgt[i] - lft[i - 1]);
        }

        cout << ans << '\n';
    }
    return 0;
}


