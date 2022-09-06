#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);
const ll mx = 1e2 + 9;
ll dp[mx][mx];
ll a[mx];
ll s;

bool solve(ll ss, ll idx) {
    if(idx < 0) return false;
    if(ss < 0) return false;
    if(ss == 0) return true;

    ll &ans = dp[ss][idx];
    if(ans != -1) return ans;

    if(a[idx] > ss) {
        return ans = solve(ss, idx - 1);
    }
    else {
    return ans = (solve(ss - a[idx], idx - 1) || solve(ss, idx - 1));
    }


}

int main() {
    FIO;
    ll n; cin >> n;
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
    }
    if(sum % 2 == 1) {
        cout << "NO" << '\n';
        return 0;
    }

    s = sum / 2;
    memset(dp, -1, sizeof(dp));
    bool anss = solve(s, n - 1);
    if(anss) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;
}


// Time Complexity: O(sum*n)




