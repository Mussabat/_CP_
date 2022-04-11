#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e5 + 3;
vector<ll>adj[mx];
bool mark[mx];

void dfs(ll u) {
    mark[u] = 1;
    for(auto v : adj[u]) {
            if(!mark[v]) {
                mark[v] = 1;
                dfs(v);
            }
        }
}

int main() {
    ll n, m; cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<ll>ans;
    ll c = 0;

    for(ll i = 1; i <= n; i++) {
        if(!mark[i]) {
            ans.push_back(i);
            dfs(i);
            c++;
        }
    }

    cout << c - 1 << endl;
    for(ll i = 1; i < ans.size(); i++) {
        cout << ans[i - 1] << " " << ans[i] << '\n';
    }
}

