#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
   ll n, m, k; cin >> n >> m >> k;
   ll a[n + 2];
   ll b[m + 2];

   for(ll i = 1; i <= n; i++) cin >> a[i];
   for(ll j = 1; j <= m; j++) cin >> b[j];

   sort(a + 1, a + n + 1);
   sort(b + 1, b + m + 1);

    ll ans = 0;

    ll i = 1;
    ll j = 1;

    while(i <= n && j <= m) {
        if(abs(a[i] - b[j]) <= k) {
            ans++;
            i++;
            j++;
        }

        else if(a[i] < b[j]) {
           i++;
        }
        else {
            j++;
        }
    }
   cout << ans << '\n';
   return 0;
}
