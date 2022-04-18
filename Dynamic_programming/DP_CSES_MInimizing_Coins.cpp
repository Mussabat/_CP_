#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e6 + 4;
const ll inf = 1e18;

ll dp[mx];
ll a[106];
ll n, c;


int main() {
    cin >> n >> c;
    for(ll i = 0; i < n; i++) cin >> a[i];
    for(ll i = 0; i <= c; i++) dp[i] = inf;
    dp[0] = 0;
    for(ll i = 1; i <= c; i++) {
        for(ll j = 0; j < n; j++) {
            if(i - a[j] >= 0) {
                dp[i] = min(dp[i], (1 + dp[i - a[j]]));
            }
        }
    }
    ll anss = dp[c];
    if(anss == inf) anss = -1;
    cout << anss << '\n';
}

