#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e6 + 5;
const ll MOD = 1e9 + 7;

inline void normal(ll &a) {if(a>=MOD)a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) {normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) {normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) {normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

ll f[mx];
int main() {
  f[0] = 1;
  for(ll i = 1; i < mx; i++) {
    f[i] = modMul(f[i - 1], i);
  }
  map<char, ll>m;
  string s; cin >> s;
  for(ll i = 0; i < s.size(); i++) {
    m[s[i]]++;
  }

  ll n = s.size();
  ll ans = f[n];
  vector<ll>v;
  for(auto [i, j] : m) {
    if(j > 1) v.push_back(j);
  }

  for(ll i = 0; i < v.size(); i++) {
    ans = modDiv(ans, f[v[i]]);
  }
  cout << ans << '\n';
  return 0;
}
