#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll>a(n);
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.rbegin(), a.rend());

    ll ans = max(sum, (a[0] * 2));
    cout << ans << '\n';
    return 0;
}
