
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e6 + 4;
const ll mod = 1e9 + 7;

ll dp[mx];
ll a[mx];
ll n, c;

int main() {
    cin >> n >> c;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    dp[0] = 1;
    for(ll i = 1; i <= c; i++) {
        for(ll j = 0; j < n; j++) {
            if((i - a[j]) >= 0) {
                dp[i] += (dp[i - a[j]]);
                dp[i] %= mod;
            }
        }
    }

    ll anss = dp[c];
    cout << anss << '\n';
}
