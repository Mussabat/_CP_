#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e5 + 9;

vector<ll>adj[mx];
vector<vector<ll>>ans;
vector<ll>path;
ll n, m;

void dfs(ll s, ll t, ll p) {
    path.push_back(s);
    if(s == t) {
        ans.push_back(path);
        path.pop_back();
        return;
    }

    for(auto v : adj[s]) {
        if(v == p) continue;
        dfs(v, t, s);
    }
    path.pop_back();
}

int main() {
   cin >> n >> m;
   for(ll i = 0; i < m; i++) {
    ll u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
   }

   ll start, target; cin >> start >> target;
   dfs(start, target, -1);

   for(ll i = 0; i < ans.size(); i++) {
    for(ll j = 0; j < ans[i].size(); j++) {
        cout << ans[i][j] << " ";
    }
    cout << '\n';
   }


}
