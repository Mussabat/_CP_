#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 505;
const ll inf = 1e18;

ll adj[mx][mx];
ll dist[mx][mx];

ll n, m, q;

void FloyedWarshall() {
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= n; j++) {
            dist[i][j] = adj[i][j];
        }
    }


    for(ll k = 1; k <= n; k++) {
        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= n; j++) {
                if(dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main() {
    cin >> n >> m >> q;
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= n; j++) {
            adj[i][j] = inf;
        }
        adj[i][i] = 0;
    }

    for(ll i = 1; i <= m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = min(w, adj[u][v]);
        adj[v][u] = min(w, adj[v][u]);
    }

    FloyedWarshall();

    while(q--) {
        ll u, v;
        cin >> u >> v;
        ll ans = dist[u][v];
        if(ans == inf) {
            cout << -1 << '\n';
        } else {
            cout << ans << '\n';
        }

    }
}

