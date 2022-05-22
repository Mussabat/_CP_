#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 2e5 + 2;
ll a[mx];
ll n, k;

bool ok(ll mid) {
    ll block = 1;
    ll sum = 0;
    for(ll i = 0; i < n; i++) {
        if(sum + a[i] <= mid) {
            sum += a[i];
        }
        else{
            sum = a[i];
            block++;
        }
    }

    if(block <= k) return 1;

    else return 0;

}

int main() {
   cin >> n >> k;
   ll hi = 1e18;
   ll lo = 0;
   ll m;
   for(ll i = 0; i < n; i++) {
    cin >> a[i];
    lo = max(a[i], lo);
   }

   ll ans = 1e18;
   while(lo <= hi) {
    m = (lo + hi) / 2;
    if(ok(m)) {
        ans = m;
        hi = m - 1;
    }
    else lo = m + 1;
   }
   cout << ans << '\n';
   return 0;
}

