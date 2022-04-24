#include<bits/stdc++.h>

#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"

using namespace std;
typedef long long ll;

using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;



ll a[200006];
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

int main() {
    FIO;
    ordered_set<ll> s;
    ll n, k;
    cin >> n >> k;

    for(ll i = 1; i <= n; i++) {
        s.insert(i);
    }

    vector<ll>a;
    ll c = k;
    while(s.size() != 0) {
        c  = c % s.size();
        auto p = s.find_by_order(c);
        a.push_back(*p);
        s.erase(s.find(*p));
        c += k;

    }
    for(auto i : a) cout << i << " ";
    cout << '\n';

    return 0;

}


