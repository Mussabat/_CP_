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
ll W;

ll solve(ll ww, ll sum, ll idx) {
    if(idx < 0) return 0;
    if(ww <= 0) return 0;

    if(ww < w[idx]) {
        return solve(ww, sum, idx - 1);
    }
    else {
        return max((v[idx] + solve(ww - w[idx], sum, idx - 1)), solve(ww, sum, idx - 1));
    }

}


int main() {
    cin >> n;
    for(ll i = 0; i < n; i++) cin >> w[i] >> v[i];
    cin >> W;
    ll anss = solve(W,  0, n);
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


//Time Complexity: O(2^n).
//Auxiliary Space :O(1) + O(N).





