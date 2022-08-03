#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 6e3 + 5;

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

ll n, m, k;
ll a[mx];
ll b[mx];
const ll inf = 1e18;
ll dp[33][33][33][33];

ll solve(ll first_a, ll last_a, ll first_b, ll last_b) {

    ll &ans = dp[first_a][last_a][first_b][last_b];
    if(ans != -1) return ans;

    ans = -inf;

    ll rem = k - (first_a + last_a + first_b + last_b);

    ll la = first_a + 1;
    ll ra = n - last_a;
    ll lb = first_b + 1;
    ll rb = m - last_b;

    if(rem <= 0) return ans = 0;

    if(la <= ra) {
        if(first_a < k) ans = max(ans, solve(first_a + 1, last_a, first_b, last_b) + a[la]);
        if(last_a < k) ans = max(ans, solve(first_a, last_a + 1, first_b, last_b) + a[ra]);
    }

    if(lb <= rb) {
        if(first_b < k) ans = max(ans, solve(first_a, last_a, first_b + 1, last_b) + b[lb]);
        if(last_b < k) ans = max(ans, solve(first_a, last_a, first_b, last_b + 1) + b[rb]);
    }

    return ans;

}

int main() {
    FIO;
    ll t; cin >> t;
    ll f = 0;
    while(t--) {
        cout << "Case #" << ++f << ": ";

        cin >> n;
        for(ll i = 1; i <= n; i++) cin >> a[i];
        cin >> m;
        for(ll j = 1; j <= m; j++) cin >> b[j];


        cin >> k;

        memset(dp, -1, sizeof dp);
        ll anss = solve(0, 0, 0, 0);

        cout << anss << '\n';


    }
    return 0;

}
