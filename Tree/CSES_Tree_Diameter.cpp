#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 5e5 + 4;
vector<ll>adj[mx];
ll dist[mx];
ll p[mx];
ll m;
ll n;

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


void dfs(ll u, ll par = -1, ll lvl = 0) {
    dist[u] = lvl;
    p[u] = par;

    for(auto v : adj[u]) {
        if(v == par) continue;
        dfs(v, u, lvl + 1);
    }
}

int main() {
    FIO;
        cin >> n;
        m = n - 1;
        for(ll i = 0; i < m; i++) {
            ll u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        ll last_u;
        ll last_v;
        dfs(1);
        ll c = 0;

        for(ll i = 1; i <= n; i++) {
            if(c < dist[i]) {
                last_u = i;
                c = dist[i];
            }
        }


        dfs(last_u);


        c = 0;


        for(ll i = 1; i <= n; i++) {
            if(c < dist[i]) {
                last_v = i;
                c = dist[i];
            }
        }

        ll diameter = c;


       cout << diameter << '\n';


}
