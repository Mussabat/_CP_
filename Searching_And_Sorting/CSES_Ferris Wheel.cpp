#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
   ll n, x; cin >> n >> x;
   ll a[n + 2];
   for(ll i = 1; i <= n; i++) cin >> a[i];
   ll ans = n;
   sort(a + 1, a + 1 + n);
   ll i = 1;
   ll j = n;
   while(i != n || j != 1) {
    if(i >= j) break;
    if((a[i] + a[j]) <= x) {
        ans--;
        i++;
        j--;

    }
    else{
        j--;
    }
   }

   cout << ans << '\n';
   return 0;
}
