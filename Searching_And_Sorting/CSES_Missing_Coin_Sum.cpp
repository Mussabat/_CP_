#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    ll a[n + 2];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll ans = 1;

    for(ll i = 0; i < n; i++) {
        if(ans < a[i]) break;
        else ans += a[i];
    }

    cout << ans << '\n';
    return 0;
}
