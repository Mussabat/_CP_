#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 2e5 + 9;
ll n, k;
vector<ll>adj[mx];
ll par[mx];
ll lvl[mx];
ll child[mx];
ll sub[mx];
priority_queue<pair<ll, ll>>q;

void dfs(ll u, ll p = -1) {
    par[u] = p;
    for(auto v : adj[u]) {
        if(v != p) {
            child[u]++;
            lvl[v] = lvl[u] + 1;
            dfs(v, u);

        }
    }
    if(!child[u]) {
        q.push({lvl[u], u});
    }
}


int main() {
    cin >> n >> k;
    for(ll i = 0; i < n - 1; i++) {
       ll u, v; cin >> u >> v;
       u--;
       v--;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }

    dfs(0);

    ll ans = 0;

    while(k && !q.empty()) {
      auto u = q.top();
      q.pop();
      ll parent = par[u.second];
      ans += u.first;
      k--;
      sub[u.second]++;
      if(parent != -1) {
        child[parent]--;
        sub[parent] += sub[u.second];
        if(child[parent] == 0) {
            q.push({lvl[parent] - sub[parent], parent});
        }
      }
    }

    cout << ans << '\n';
    return 0;


}

