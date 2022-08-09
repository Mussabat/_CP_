#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e4 + 9;

ll n, m;
ll grid[mx][mx];
ll mark[mx][mx];

ll dx[] = {0, 0, +1, -1};
ll dy[] = {+1, -1, 0, 0};

void bfs(ll u, ll v, ll clr, ll x_clr) {

    mark[u][v] = 1;
    queue<pair<ll, ll>>q;
    q.push({u, v});
    grid[u][v] = clr;
    while(!q.empty()) {
        auto cur = q.front();
        q.pop();
            for(ll i = 0; i < 4; i++) {
                ll uu = cur.first + dx[i];
                ll vv = cur.second + dy[i];
                if(uu >= 0 && uu < n && vv >= 0 && vv < m && grid[uu][vv] == x_clr) {
                    grid[uu][vv] = clr;
                    mark[uu][vv] = 1;
                    q.push({uu, vv});
                }
            }

    }

}

int main() {
   cin >> n >> m;
   for(ll i = 0; i < n; i++) {
    for(ll j = 0; j < m; j++) {
        cin >> grid[i][j];
    }
   }

   ll u, v; cin >> u >> v;
   ll clr; cin >> clr;
   ll x_clr = grid[u - 1][v - 1];

   bfs(u - 1, v - 1, clr, x_clr);

   for(ll i = 0; i < n; i++) {
    for(ll j = 0; j < m; j++) {
        cout << grid[i][j] << " ";
    }
    cout << '\n';
   }

}
