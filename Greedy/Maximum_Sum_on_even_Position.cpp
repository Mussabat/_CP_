#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

const ll mod = 1e9 + 7;

int main() {
    FIO;
    ll t; cin >> t;
    while(t--) {
      ll n; cin >> n;
      ll a[n + 2];
      ll ev = 0;
      for(ll i = 0; i < n; i++) {
        cin >> a[i];
        if(i % 2 == 0) ev += a[i];
      }
      vector<ll>v;
      vector<ll>vv;

      for(ll i = 0; i < n - 1; i += 2) {
        ll d = a[i + 1] - a[i];
        v.push_back(d);
      }


      ll sum = 0;
      ll mx = 0;
      for(ll i = 0; i < v.size(); i++) {
        sum = max(sum + v[i], v[i]);
        mx = max(sum, mx);
      }

      for(ll i = 1; i < n - 1; i += 2) {
        ll d = a[i] - a[i + 1];
        vv.push_back(d);
      }


      sum = 0;
      for(ll i = 0; i < vv.size(); i++) {
        sum = max(sum + vv[i], vv[i]);
        mx = max(sum, mx);
      }


      cout << ev + mx << '\n';

    }
    return 0;

}


