#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ll mx = 1e7 + 8;
int dp[mx][4];
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    ll t = 1;
    while(t--) {
    ll n; cin >> n;
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    dp[0][3] = 1;
    for(ll i = 1; i <= n; i++) {
       ll sum = ((long long) dp[i - 1][0] + dp[i -1][1] + dp[i - 1][2] + dp[i - 1][3]);
       for(ll j = 0; j < 4; j++) {
        dp[i][j] = (sum - dp[i - 1][j]) % mod;
       }
    }
    cout << dp[n][3] << '\n';
    }
    return 0;
}

