#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, sum; cin >> n;
    ll a[n + 2];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    map<ll, ll>m;
    m[0]++;
    sum = 0;
    for(ll i = 0; i < n; i++) {
       sum += (a[i] % n);
       sum = (sum + n) % n;
       ans += m[sum];
       m[sum]++;
    }
    cout << ans << '\n';
    return 0;
}
