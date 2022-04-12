#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt[10000008];

int main() {
    ll n; cin >> n;
    ll a[n + 2];
    for(ll i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
    }
    sort(a, a + n);
    ll d = a[n - 1];
    ll ans = 1;
    for(ll i = d; i >= 1; i--) {
        ll c = 0;
        for(ll j = i; j <= d; j += i) {
            c += cnt[j];
             if(c >= 2) {
               cout << i << '\n';
               return 0;
             }

        }
    }
    cout << ans << '\n';
    return 0;
}
