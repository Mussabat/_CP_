#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);
const ll MOD = 1e9 + 7;
inline void normal(ll &a) {if(a>=MOD)a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) {normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) {normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) {normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

int main() {
    FIO;
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll cnt = n;
        ll lc = 1;
        ll ans = 0;
        for(ll i = 1; i <= 50; i++) {
          lc = lcm(i, lc);
          ll d = (cnt - (n / lc));
          ans = modAdd(ans, modMul(d, i));
          cnt = n / lc;
          if(cnt == 0) break;
        }
        cout << ans << '\n';
    }
    return 0;
}



