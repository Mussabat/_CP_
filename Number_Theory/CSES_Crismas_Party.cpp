#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
const ll mx = 1e6 + 9;

inline void normal(ll &a) {if(a>=MOD)a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) {normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) {normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) {normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

ll dp[mx];


ll solve(ll n) {
    ll &ans = dp[n];
    if(n == 0) return 1;
    if(n == 1) return 0;
    if(ans != -1) return ans;

    return ans = (modMul(n - 1 , (modAdd(solve(n - 2) , solve(n - 1)))));
}

int main() {
    ll x; cin >> x;
    memset(dp, -1, sizeof dp);
    ll ans = solve(x);
    cout << ans << '\n';
}
