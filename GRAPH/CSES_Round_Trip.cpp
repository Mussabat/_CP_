#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e5 + 3;
vector<ll>adj[mx];
ll par[mx];
ll mark[mx];
bool cycle;
ll cycle_start;
ll cycle_end;
ll n, m;

void dfs(ll u, ll p) {
    mark[u] = 1;
    par[u] = p;
    for(auto v : adj[u]) {
        if(mark[v] == 2) continue;
        if(v == p) continue;
        else if(mark[v] == 1 && p != v) {
            cycle = true;
            cycle_start = v;
            cycle_end = u;
            return;
        }
        else {
            dfs(v, u);
        }

    if(cycle) return;
    }
    mark[u] = 2;
}

int main() {
    cin >> n >> m;
    for(ll i = 0; i < m; i++) {
      ll u, v; cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    cycle = false;
    ll last = 1;
    for(ll i = 1; i <= n; i++) {
       if(mark[i]) continue;
       dfs(i, -1);
       if(cycle) {
        break;
       }
    }

    if(!cycle) {
        cout << "IMPOSSIBLE" << '\n';
        return 0;
    }
    vector<ll>v;
    v.push_back(cycle_start);
    while(true) {
      v.push_back(cycle_end);
      if(cycle_start == cycle_end) break;
      cycle_end = par[cycle_end];
    }
    cout << v.size() << '\n';
    for(auto i : v) cout << i << " ";
    cout << '\n';
}
