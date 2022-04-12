#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;

inline void normal(ll &a) {if(a>=MOD)a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) {normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) {normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) {normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

int main() {
   ll nn, k; cin >> nn >> k;
   ll n = nn + k - 1;
   ll r = nn - 1;

   ll ans = 1;
   for(ll i = 1; i <= r; i++) {
    ans = modMul(ans, modAdd(modSub(n , i), 1ll));
    ans = modDiv(ans, i);
   }
   cout << ans << '\n';

}
