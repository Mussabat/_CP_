#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n, m;
    cin >> n >> m;
    multiset<ll>tik;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        tik.insert(x);
    }

    while(m--) {
        ll man;
        cin >> man;
        auto it = tik.upper_bound(man);
        if(it == tik.begin()) {
            cout << -1 << endl;
        } else {
            cout << *(prev(it)) << '\n';
            tik.erase(prev(it));
        }
    }

    return 0;
}
