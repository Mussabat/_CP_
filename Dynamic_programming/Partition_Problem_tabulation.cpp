#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);
const ll mx = 1e2 + 9;
ll dp[mx][mx];
ll a[mx];
ll s;


int main() {
    ll t; cin >> t;
    while(t--) {
    ll n; cin >> n;
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
    }
    if(sum % 2 == 1) {
        cout << "NO" << '\n';
        continue;
    }

    s = sum / 2;
    memset(dp, 0, sizeof(dp));

    for(ll i = 0; i < n; i++) {
            for(ll j = 0; j <= s; j++) {
                if(j == 0) {
                    dp[i][j] = 1;
                    continue;
                }
                if(i == 0 && j > 0) {
                    dp[i][j] = 0;
                    continue;
                }

                if(j < a[i]) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    dp[i][j] = (dp[i - 1][j - a[i]] || dp[i - 1][j]);
                }
            }
    }

    if(dp[n - 1][s]) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    }
    return 0;
}


// Time Complexity: O(sum*n)




