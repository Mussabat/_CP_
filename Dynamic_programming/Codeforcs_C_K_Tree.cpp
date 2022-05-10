#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

const ll mod = 1e9 + 7;

ll n, k, d;
ll dp[300][200];

ll solve(ll sum, ll mx) {
    if(sum < 0) return 0;

    ll &ans = dp[sum][mx];
    if(ans != -1) return ans;

    if(sum == 0) {
        if(mx >= d) return 1;
        else return 0;
    }
    ans = 0ll;
    for(ll i = 1; i <= k; i++) {
      ans += solve((sum - i), max(mx, i));
      (ans += mod);
      ans %= mod;
    }
    ans += mod;
    return (ans % mod);

}


int main() {
    FIO;
    cin >> n >> k >> d;
    memset(dp, -1, sizeof dp);
    ll anss = solve(n, 0);
    cout << anss << '\n';
    return 0;
}

