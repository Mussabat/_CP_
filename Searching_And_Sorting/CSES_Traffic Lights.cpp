#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x, n;
    cin >> x >> n;
    set<ll>positions;
    multiset<ll>lengths;
    positions.insert(x);
    positions.insert(0ll);
    lengths.insert(x - 0ll);
    while(n--) {
        ll p;
        cin >> p;
        positions.insert(p);
        auto it = positions.find(p);
        ll prev_p = *prev(it);
        ll next_p = *next(it);
        lengths.erase(lengths.find(next_p - prev_p));
        lengths.insert(p - prev_p);
        lengths.insert(next_p - p);
        auto jt = lengths.rbegin();
        cout << *jt << '\n';
    }
    return 0;
}
