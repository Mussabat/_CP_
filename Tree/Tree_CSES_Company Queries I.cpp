#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 2e5 + 5;
const ll mxx = 20;
ll nxt[mx][mxx];
ll par[mx];

ll query(ll u, ll dur) {
    for(ll i = 0; i < mxx; i++) {
        if(dur & (1 << i)) u = nxt[u][i];
    }
    return u;
}

int main() {
    ll n, q; cin >> n >> q;

    for(ll i = 2; i <= n; i++) {
        cin >> par[i];
    }

    for(ll i = 1; i <= n; i++) {
        nxt[i][0] = par[i];
    }

    for(ll d = 1; d < mxx; d++) {
        for(ll i = 1; i <= n; i++) {
          nxt[i][d] = nxt[nxt[i][d - 1]][d - 1];
        }
    }

    while(q--) {
        ll x, k; cin >> x >> k;
        ll ans = query(x, k);
        if(ans == 0) ans = -1;

        cout << ans << '\n';
    }

}



