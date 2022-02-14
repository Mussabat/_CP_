#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e18;

ll v[101];
ll w[101];
ll dp[101][100001];

ll n, W;

int main() {
    cin >> n >> W;
    for(ll i = 0; i < n; i++) cin >> w[i] >> v[i];

    dp[0][0] = 0;
    dp[0][w[0]] = v[0];

    for(ll i = 1; i < n; i++) {
        dp[i][0] = 0;
        for(ll j = 1; j <= W; j++) {
            // na nile;

            dp[i][j] = dp[i - 1][j];
            // nile

            if(j >= w[i])
            dp[i][j] = max(dp[i][j], v[i] + dp[i - 1][j - w[i]]);
        }
    }




    ll ans = -inf;

   for(ll i = 1; i <= W; i++) {
        ans = max(ans, dp[n - 1][i]);
    }




    cout << ans << endl;
}
