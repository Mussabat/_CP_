#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin >> n;
    ll a[n + 2];
    for(ll i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    ll ans = 0;
    if(n % 2 == 1) {
        ll mid = n / 2;
        ll sum = 0;
        for(ll i = 0; i < n; i++) {
            sum += abs(a[i] - a[mid]);
        }
        ans = sum;
    }

    else {
        ll mid1 = n / 2;
        ll mid2 = mid1 + 1;

        ll sum1 = 0;
        ll sum2 = 0;

        for(ll i = 0; i < n; i++) {
            sum1 += abs(a[i] - a[mid1]);
        }

        for(ll i = 0; i < n; i++) {
            sum2 += abs(a[i] - a[mid2]);
        }
        ans = min(sum1, sum2);
    }

    cout << ans << '\n';
    return 0;
}
