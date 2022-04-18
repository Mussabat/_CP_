#include<bits/stdc++.h>
using namespace std;
typedef int ll;

const ll mx = 1e3 + 5;
const ll mxx = 1e5 + 5;


ll dp[mx][mxx];


int main() {
   ll n, x; cin >> n >> x;
   ll h[n + 2];
   ll s[n + 2];

   for(ll i = 0; i < n; i++) cin >> h[i];
   for(ll j = 0; j < n; j++) cin >> s[j];

   dp[0][0] = 0;
   dp[0][h[0]] = s[0];

   for(ll i = 1; i < n; i++) {
    dp[i][0] = 0;
    for(ll j = 1; j <= x; j++) {
        // na nile
        dp[i][j] = dp[i - 1][j];
        // nile
        if(j >= h[i]) {
        dp[i][j] = max(dp[i][j], s[i] + dp[i - 1][j - h[i]]);
        }
    }
   }

    ll ans = -(1e15);

   for(ll i = 1; i <= x; i++) {
        ans = max(ans, dp[n - 1][i]);
    }


   cout << ans << '\n';
   return 0;
}


