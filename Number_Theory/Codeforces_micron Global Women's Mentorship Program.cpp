#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    ll t = 1;
    while(t--) {
        ll n, m; cin >> n >> m;
        set<ll>s;
        ll a[n + 2];
        for(ll i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }

        if(s.size() != n) {
          cout << 0 << '\n';
          continue;
        }

        if(n > m) { // Pigeonhole principle
          cout << 0 << '\n';
          continue;
        }

        ll ans = 1;
        for(ll i = 0; i < n; i++) {
            for(ll j = i + 1; j < n; j++) {
                ans = (ans * (abs(a[i] - a[j])));
                ans %= m;
            }
        }

        cout << ans << '\n';


    }
}



