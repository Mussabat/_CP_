#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e4 + 4;

ll dx[] = {+1, -1, 0, 0};
ll dy[] = {0, 0, +1, -1};

char grid[mx][mx];
ll mark[mx][mx];
ll n, m;

bool isvalid(ll x, ll y) {
    if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == '#') return false;
    else return true;
}

ll dfs(ll x, ll y) {
    mark[x][y] = 1;
    for(ll i = 0; i < 4; i++) {
       ll xx = x + dx[i];
       ll yy = y + dy[i];
       if(isvalid(xx, yy)) {
        if(!mark[xx][yy]) {
            dfs(xx, yy);
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

    ll rooms = 0;

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(mark[i][j] == 0 && grid[i][j] == '.') {
                dfs(i, j);
                rooms++;
            }
        }
    }

    cout << rooms << '\n';
    return 0;
}

