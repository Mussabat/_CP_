#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll solve(ll b, ll p, ll m) {
    ll res = 1;
    while(p > 0) {
        if(p & 1) {
            res = (res * b) % m;
        }
        b = (b * b) % m;
        p >>= 1;
    }
    return res;
}
int main() {
    ll t; cin >> t;
    while(t--) {
        ll a, b, c; cin >> a >> b >> c;
        ll k = solve(b, c, mod - 1);
        ll ans = solve(a, k, mod);
        cout << ans << '\n';
    }
    return 0;
}

