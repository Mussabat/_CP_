#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int mx = 1e2 + 8;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

ll n;
ll sum;
ll a[mx];

bool solve(ll s, ll i) {

    if(s == 0) return true;
    if(s < 0) return false;
    if(i < 0) return false;

    if(a[i] > s) {
    return solve(s, i - 1);

    }
    else{
    return (solve(s - a[i], i - 1)) || (solve(s, i - 1));
    }
}


int main() {

    cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    cin >> sum;
    bool ans = solve(sum, n - 1);
    if(ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';
    return 0;

}


/*

5
2 3 7 8 10
11

*/





