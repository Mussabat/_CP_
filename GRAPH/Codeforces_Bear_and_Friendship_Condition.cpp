#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int mx = 1.5e5 + 8;
vector<ll>adj[mx];
ll mark[mx];
ll c;
ll d;

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

void dfs(ll u) {
    mark[u] = 1;
    c++;
    d += adj[u].size();
    for(auto v : adj[u]) {
        if(!mark[v])
        dfs(v);
    }

}

int main() {
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool naf = true;

    for(ll i = 1; i <= n; i++) {
        if(mark[i]) continue;
        c = 0;
        d = 0;
        dfs(i);
        if((c * (c - 1)) !=  d) {
            naf = false;
            break;
        }
    }

    if(naf) cout << "YES" << '\n';
    else cout << "NO" << '\n';


    return 0;
}


