#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
   ll n, s; cin >> n >> s;
   vector<pair<ll, ll>>v;

   for(ll i = 1; i <= n; i++) {
    ll x; cin >> x;
    v.push_back({x, i});
   }

   sort(v.begin(), v.end());

    ll l = 0;
    ll r = n - 1;
    while(l < r) {
        ll sum = v[l].first + v[r].first;
        if(sum == s) {
            cout << v[l].second << " " << v[r].second << '\n';
            return 0;
        }
        if(sum < s) l++;
        else r--;
    }


   cout << "IMPOSSIBLE" << '\n';
   return 0;
}
