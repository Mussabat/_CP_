#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"

using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

int main() {
    ordered_set<pair<ll, ll>>s;
    ll n, k; cin >> n >> k;

    ll a[n + 2];
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll c = 0;
    ll j = 0;

    for(ll i = 0; i < n; i++) {
       s.insert({a[i], i});
       c++;
       if(c >= k) {
        ll m = (k / 2);
        if(k % 2 == 0) m--;
        auto ans1 = s.find_by_order(m)->first;
        cout << ans1 << '\n';
        ll u = a[j];
        s.erase(s.find({u, j}));
        j++;
       }
    }
}

