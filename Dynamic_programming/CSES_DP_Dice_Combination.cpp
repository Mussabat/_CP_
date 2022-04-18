#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
const ll mx = 1e6 + 9;

ll dp[mx];
ll n;

ll solve(ll nmbr) {
    ll &ans = dp[nmbr];
    if(ans != -1) return ans;
    if(nmbr > n) return 0;
    if(nmbr == n) {
        return ans = 1;
    }

    ans = 0;
    ans += solve(nmbr + 1);
    ans %= mod;
    ans += solve(nmbr + 2);
    ans %= mod;
    ans += solve(nmbr + 3);
    ans %= mod;
    ans += solve(nmbr + 4);
    ans %= mod;
    ans += solve(nmbr + 5);
    ans %= mod;
    ans += solve(nmbr + 6);
    ans %= mod;

    return ans;
}

int main() {
    cin >> n;
    memset(dp, -1, sizeof dp);
    ll anss = solve(0);
    cout << anss << '\n';
}

