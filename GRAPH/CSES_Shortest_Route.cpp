#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = (2 * 1e5) + 2;
const ll inf = 9e18;

ll n, m;
vector<pair<ll, ll>>adj[mx];
ll dist[mx];

struct node{
    ll idx;
    ll d;
};

bool operator<(node a, node b) {
    return a.d > b.d;
}

void dijkstra(ll source) {
    for(ll i = 1; i <= n; i++) dist[i] = inf;
    dist[source] = 0;
    priority_queue<node>pq;
    pq.push({source, 0});
    while(!pq.empty()) {
        node u = pq.top();
        pq.pop();

        ll cur = u.idx;
        if(u.d != dist[cur]) continue;

        for(auto vv : adj[cur]) {
            ll v = vv.first;
            ll w = vv.second;

            if(dist[cur] + w < dist[v]) {
                dist[v] = dist[cur] + w;
                pq.push({v, dist[v]});
            }
        }
    }
}


int main() {
    cin >> n >> m;
    for(ll i = 0; i < m; i++) {
        ll u, v, w; cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
    }

    dijkstra(1);
    for(ll i = 1; i <= n; i++) {
        cout << dist[i] << " ";
    }
    cout << endl;
    return 0;
}


