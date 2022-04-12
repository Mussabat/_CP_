#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll solve(ll base, ll p) {
    ll res = 1;
    while(p > 0) {
    if(p & 1) {
        res = (res * base) % mod;
    }

    base = (base * base) % mod;
    p >>= 1;
    }
    return res;
}

int main() {
    ll t; cin >> t;
    while(t--) {
       ll a, b; cin >> a >> b;
       ll ans = solve(a, b);
       cout << ans  << '\n';
    }
    return 0;
}

