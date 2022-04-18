
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e3 + 4;
const ll mod = 1e9 + 7;

ll dp[mx][mx];
char grid[mx][mx];

ll n;

ll solve(ll i, ll j) {
    ll &ans = dp[i][j];
    if(ans != -1) return ans;

    if(i > n) return 0;
    if(j > n) return 0;

    if(i == n && j == n ) {
        if(grid[i][j] == '.') {
            return ans = 1;
        } else return ans = 0;
    }

    ans = 0;
    if(grid[i][j] != '*') {
        ans += solve(i + 1, j);
        ans %= mod;
        ans += solve(i, j + 1);
        ans %= mod;
    }
    return ans;
}

int main() {
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }
    memset(dp, -1, sizeof dp);
    ll anss = solve(1, 1);
    cout << anss << '\n';
    return 0;
}

