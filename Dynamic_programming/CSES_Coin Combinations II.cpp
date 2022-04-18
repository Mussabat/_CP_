#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e6 + 3;
const ll mod = 1e9 + 7;
ll dp[mx];

int main() {
   ll n, sum; cin >> n >> sum;
   ll a[n + 2];
   for(ll i = 0; i < n; i++) cin >> a[i];
   dp[0] = 1;
   for(ll i = 0; i < n; i++) {
    for(ll j = 1; j <= sum; j++) {
        if(j - a[i] >= 0) {
            dp[j] = (dp[j] + dp[j - a[i]]) % mod;
        }
    }
   }
   cout << dp[sum] << '\n';
   return 0;
}

