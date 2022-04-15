#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    ll a[n + 2];
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll sum = a[0];
    ll mx = a[0];

    for(ll i = 1; i < n; i++) {
       sum = max(sum + a[i], a[i]);
       mx = max(sum, mx);
    }

    cout << mx << '\n';
    return 0;
}
