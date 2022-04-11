#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e3 + 4;
const ll inf = 1e18;

char grid[mx][mx];
char ans[mx * mx];
bool mark[mx][mx];
ll dist[mx][mx];
char par[mx][mx];

ll n, m;

ll dx[] = {0, 0, +1, -1};
ll dy[] = {+1, -1, 0, 0};

int main() {
    ll n, m;
    cin >> n >> m;

    for(ll i = 0; i <= n; i++) {
        for(ll j = 0; j <= m; j++) {
            dist[i][j] = inf;
            mark[i][j] = 0;
        }
    }

    ll a, b, c, d;

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'A') {
                a = i;
                b = j;
            }

            if(grid[i][j] == 'B') {
                c = i;
                d = j;
            }
        }
    }

    queue<pair<ll, ll>>q;

    dist[a][b] = 0;
    mark[a][b] = 1;
    q.push({a, b});

    while(!q.empty()) {
        auto u = q.front();
        q.pop();
        ll r = u.first;
        ll co = u.second;


        if(dist[c][d] < inf) break;

        for(ll i = 0; i < 4; i++) {
            ll rr = r + dx[i];
            ll cc = co + dy[i];

            if( rr < 0 || rr >= n || cc < 0 || cc >= m || grid[rr][cc] == '#') continue;

            if(!mark[rr][cc]) {
                mark[rr][cc] = 1;
                q.push({rr, cc});
                dist[rr][cc] = 1 + dist[r][co];

                if(rr == r && cc == (co - 1)) par[rr][cc] = 'L';
                else if(rr == r && cc == (co + 1)) par[rr][cc] = 'R';
                else if(rr == r - 1 && cc == co) par[rr][cc] = 'U';
                else if(rr == r + 1 && cc == co) par[rr][cc] = 'D';

                if(dist[c][d] < inf) break;

            }
        }
    }

    if(dist[c][d] == inf) {
        cout << "NO" << '\n';
        return 0;
    }

    cout << "YES" << '\n';
    cout << dist[c][d] << '\n';

    string res = "";

    while(c != a || d != b) {
        res += par[c][d];

        if(par[c][d] == 'L') d++;
        else if(par[c][d] == 'R') d--;
        else if(par[c][d] == 'U') c++;
        else if(par[c][d] == 'D') c--;

    }

    reverse(res.begin(), res.end());
    cout << res << '\n';
    return 0;


}

