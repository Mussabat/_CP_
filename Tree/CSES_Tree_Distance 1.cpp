#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 2e5 + 5;
ll dist[mx][2];
bitset<mx>mark;
vector<ll>adj[mx];

void bfs(ll source, ll trn) {
    queue<ll>q;
    q.push(source);
    dist[source][trn] = 0;
    mark[source] = 1;

    while(!q.empty()) {
        auto u = q.front();
        q.pop();
        for(auto v : adj[u]) {
            if(!mark[v]) {
                mark[v] = 1;
                dist[v][trn] = dist[u][trn] + 1;
                q.push(v);
            }
        }

    }

}


int main() {
    ll n; cin >> n;
    for(ll i = 0; i < n - 1; i++) {
      ll u, v; cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    bfs(1, 0);

    ll mx = 0;
    ll ek_matha = 0;

    for(ll i = 1; i <= n; i++) {
        if(mx < dist[i][0]) {
            ek_matha = i;
            mx = dist[i][0];
        }
    }

    mark = 0;
    bfs(ek_matha, 0);

    mx = 0;
    ll arek_matha = 0;

    for(ll i = 1; i <= n; i++) {
        if(mx < dist[i][0]) {
            arek_matha = i;
            mx = dist[i][0];
        }
    }

    mark = 0;
    bfs(arek_matha, 1);

    vector<ll>ans;

    for(ll i = 1; i <= n; i++) {
        ll d = max(dist[i][1], dist[i][0]);
        ans.push_back(d);
    }

    for(auto i : ans) cout << i << " ";

    cout << '\n';
    return 0;

}
