#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int mx = 1e2 + 8;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

ll n;
ll v[mx];
ll w[mx];
ll dp[mx][mx];
ll W;

ll solve(ll ww, ll idx) {

    if(idx < 0) return 0;
    if(ww < 0) return 0;

    ll &ans = dp[ww][idx];
    if(ans != -1) return ans;

    if(ww < w[idx]) {
     ans = solve(ww, idx - 1);
    }
    else{
        ans =  max(v[idx] + solve(ww - w[idx], idx - 1), solve(ww, idx - 1));

    }

    return ans;


}


int main() {
    cin >> n;
    for(ll i = 0; i < n; i++) cin >> w[i] >> v[i];
    cin >> W;
    memset(dp, -1, sizeof(dp));
    ll anss = solve(W, n - 1);
    cout << anss << '\n';
    return 0;
}


/*

3
10 60
20 100
30 120
50

*/





