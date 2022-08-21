#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int mx = 1e6 + 9;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    ll t; cin >> t;
    ll f = 0;
    while(t--) {
    cout << "Case " << ++f << ":" << '\n';
    bitset<mx>mark;
    ll n, q; cin >> n >> q;
    for(ll i = 0; i <= mx; i++) {
        mark[i] = 1;
    }
    while(q--) {
    ll c, x; cin >> c >> x;
    if(c == 1) {
        mark[x] = 0;
    }
    else{
        ll d = mark._Find_next(x - 1);
        cout << d << '\n';
    }
    }
    }

    return 0;
}


