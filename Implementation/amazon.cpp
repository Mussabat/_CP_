
/// given an array in increasing order
/// choose an non-negative int x and take bitwise xor with all the elements of that array
/// Finally make that array a decreasing one.


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll>a;
ll ans;

void solve(ll l, ll r, ll bit) {
    if(bit < 0) return;
    if(l == r) return;

    if((a[l] & (1 << bit)) == (a[r] & (1 << bit))) {
        solve(l, r, bit - 1);
        return;
    }

    ll mid = l;
    for(ll i = l; i <= r; i++) {
        if(a[i] & (1 << bit)) break;
        mid = i;
    }

    ans |= (1 << bit);

    solve(l, mid, bit - 1);
    solve(mid + 1, r, bit - 1);

    return;
}


int main() {

    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        a.resize(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        ans = 0;
        solve(0ll, n - 1, 30ll);
        cout << ans << '\n';
    }
}
