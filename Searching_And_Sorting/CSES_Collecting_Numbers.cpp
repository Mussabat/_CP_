#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    ll ans = 0;
    set<ll>s;
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        ll k = x - 1;
        if(s.count(k) == 0) ans++;
        s.insert(x);
    }
    cout << ans << '\n';
    return 0;
}
