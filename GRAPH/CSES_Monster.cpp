#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e3 + 3;
const ll inf = 9e18;

char grid[mx][mx];
ll mark[mx][mx];
vector<pair<ll, ll>>monster;
vector<pair<ll, ll>>anne;
ll dist_anne[mx][mx];
ll dist_monster[mx][mx];
char par[mx][mx];
ll n, m;

ll dx[] = {0, 0, +1, -1};
ll dy[] = {+1, -1, 0, 0};

bool invalid(ll r, ll c) {
    if(r < 0 || r >= n || c < 0 || c >= m || grid[r][c] == '#') return false;
    else return true;
}

void bfs_monster() {
    memset(mark, 0, sizeof mark);
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            dist_monster[i][j] = inf;
        }
    }
    queue<pair<ll, ll>>q;
    for(auto [i, j] : monster) {
        q.push({i, j});
        mark[i][j] = 1;
        dist_monster[i][j] = 0;
    }

    while(!q.empty()) {
        auto u = q.front();
        q.pop();
        ll rr = u.first;
        ll cc = u.second;
        for(ll i = 0; i < 4; i++) {
            ll rrr = rr + dx[i];
            ll ccc = cc + dy[i];
            if(!invalid(rrr, ccc)) continue;
            if(!mark[rrr][ccc]) {
                mark[rrr][ccc] = 1;
                dist_monster[rrr][ccc] = dist_monster[rr][cc] + 1;
                q.push({rrr, ccc});
            }
        }
    }
}

void bfs_anne() {
    memset(mark, 0, sizeof(mark));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            dist_anne[i][j] = inf;
        }
    }
    queue<pair<ll, ll>>q;
    q.push({anne[0].first, anne[0].second});
    mark[anne[0].first][anne[0].second] = 1;
    dist_anne[anne[0].first][anne[0].second] = 0;

    while(!q.empty()) {
        auto u = q.front();
        q.pop();
        ll rr = u.first;
        ll cc = u.second;
        for(ll i = 0; i < 4; i++) {
            ll rrr = rr + dx[i];
            ll ccc = cc + dy[i];
            if(!invalid(rrr, ccc)) continue;
            if(!mark[rrr][ccc]) {
                mark[rrr][ccc] = 1;
                ll d = dist_anne[rr][cc] + 1;
                if(d >= dist_monster[rrr][ccc]) continue;
                dist_anne[rrr][ccc] = d;
                q.push({rrr, ccc});
                if(rrr == rr && ccc == cc - 1) par[rrr][ccc] = 'L';
                else if(rrr == rr && ccc == cc + 1) par[rrr][ccc] = 'R';
                else if(rrr == rr - 1 && ccc == cc) par[rrr][ccc] = 'U';
                else if(rrr == rr + 1 && ccc == cc) par[rrr][ccc] = 'D';
            }
        }
    }

}


int main() {
    cin >> n >> m;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'A') anne.push_back({i, j});
            else if(grid[i][j] == 'M') monster.push_back({i, j});
        }
    }

    bfs_monster();
    bfs_anne();

    ll ans = inf;
    ll mn = inf;
    ll a = anne[0].first;
    ll b = anne[0].second;
    ll c = 0;
    ll d = 0;
    for(ll i = 0; i < m; i++) {
        ans = min(ans, dist_anne[0][i]);
        if(ans < mn) {
            mn = ans;
            c = 0;
            d  = i;
        }
    }

    for(ll i = 0; i < m; i++) {
        ans = min(ans, dist_anne[n - 1][i]);
        if(ans < mn) {
            mn = ans;
            c = n - 1;
            d  = i;
        }
    }

    for(ll i = 0; i < n; i++) {
        ans = min(ans, dist_anne[i][0]);
        if(ans < mn) {
            mn = ans;
            c = i;
            d  = 0;
        }
    }

    for(ll i = 0; i < n; i++) {
        ans = min(ans, dist_anne[i][m - 1]);
        if(ans < mn) {
            mn = ans;
            c = i;
            d  = m - 1;
        }
    }

    if(ans == inf) {
        cout << "NO" << '\n';
        return 0;
    }

    string res = "";
    while(c != a || d != b) {
        res += par[c][d];
        if(par[c][d] == 'L') d++;
        else if(par[c][d] == 'R') d--;
        else if(par[c][d] == 'U') c++;
        else if(par[c][d] == 'D') c--;


    }


    reverse(res.begin(), res.end());

    cout << "YES" << '\n';
    cout << ans << '\n';
    cout << res << '\n';


}


