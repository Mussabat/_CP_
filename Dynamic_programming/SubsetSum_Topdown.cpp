#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int mx = 1e2 + 8;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

ll sum;
ll n;
ll a[mx];
bool dp[mx][mx];

int main() {

     cin >> n;
     for(ll i = 1; i <= n; i++) cin >> a[i];
     cin >> sum;
     memset(dp, 0, sizeof(dp));
     for(ll i = 0; i <= n; i++) {
        for(ll j = 0; j <= sum; j++) {
           if(j == 0) {
            dp[i][j] = true;
            continue;
           }
           if(i == 0 && j > 0) {
            dp[i][j] = false;
            continue;
           }

           if(j < a[i]) {
            dp[i][j] = dp[i - 1][j];
           }
           else{
            dp[i][j] = (dp[i - 1][j - a[i]] || dp[i - 1][j]);
           }
        }
     }

     if(dp[n][sum]) cout << "YES" << '\n';
     else cout << "NO" << '\n';
     return 0;

}


/*

5
2 3 7 8 10
11

*/





