#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int mx = 1e2 + 8;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

ll n;
ll w[mx];
ll v[mx];
ll W;
ll dp[mx][mx];

int main() {
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    cin >> W;
    for(ll i = 0; i <= n; i++) {
        for(ll j = 0; j <= W; j++) {
            if(i == 0 || j == 0) {
              dp[i][j] = 0;
              continue;
            }
            if(w[i] <= j) {
                dp[i][j] = max((v[i] + dp[i - 1][j - w[i]]), dp[i - 1][j]);
            }
            else{
                dp[i][j] = dp[i - 1][j];
            }

        }
    }

    cout << dp[n][W] << '\n';
}


/*

3
10 60
20 100
30 120
50

4

3 2
4 3
6 1
5 4
8

*/





