#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e5 + 4;
vector<ll>adj[mx];
ll clr[mx];
ll n, m;

int main() {
   ll n, m; cin >> n >> m;
   for(ll i = 0; i < m; i++) {
    ll u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
   }
    bool pika = true;

   for(ll i = 1; i <= n; i++) {
    if(clr[i] != 0) continue;
    queue<ll>q;
    q.push(i);
    clr[i] = 1;
    while(!q.empty()) {
    auto u = q.front();
    q.pop();
    for(auto v : adj[u]) {
        if(!clr[v])  {
            q.push(v);
            if(clr[u] == 1) clr[v] = 2;
            else if(clr[u] == 2) clr[v] = 1;
        }
        if(clr[u] == clr[v]) {
            pika = false;
            break;
        }
    }
   }
   }

   if(!pika) {
    cout << "IMPOSSIBLE" << '\n';
    return 0;
   }

   for(ll i = 1; i <= n; i++) {
    cout << clr[i] << " ";
   }
   cout << '\n';
}

