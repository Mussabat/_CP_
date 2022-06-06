#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
   FIO;
   ll n; cin >> n;
   ll ans = 0;
   ll nn = n;
   for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
        ans++;
    }
   }

   if(ans == 1) cout << 1 << '\n';
   else if(nn % 2 == 0) cout << 2 << '\n';
   else {
    ll k = nn - 2;
    ll c = 0;
    for(ll i = 1; i * i <= k; i++) {
    if(k % i == 0) {
        c++;
    }
   }
   if(c == 1) cout << 2 << '\n';
   else cout << 3 << '\n';
   }

}

