#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, sum; cin >> n >> sum;
    ll a[n + 2];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    map<ll, ll>m;
    m[0] = 1;
    ll su = 0;
    for(ll i = 0; i < n; i++) {
       su += a[i];
       ans += m[su - sum];
       m[su]++;
    }
    cout << ans << '\n';
    return 0;
}
