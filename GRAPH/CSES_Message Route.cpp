#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e5 + 5;

vector<ll>adj[mx];
bool mark[mx];
ll par[mx];

int main() {
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<ll>q;
    q.push(1ll);
    mark[1ll] = 1ll;
    par[1ll] = -1ll;

    while(!q.empty()) {
        auto u = q.front();
        q.pop();
        for(auto v : adj[u]) {
            if(!mark[v]) {
                mark[v] = 1;
                par[v] = u;
                q.push(v);
            }
        }
    }

    if(mark[n] == 0) {
        cout << "IMPOSSIBLE" << '\n';
        return 0;
    }
    vector<ll>ans;
    ans.push_back(n);
    ll d = par[n];

    while(d != -1) {
      ans.push_back(d);
      d = par[d];
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << '\n';

    for(auto i : ans) cout << i << " ";
    cout << '\n';
}

