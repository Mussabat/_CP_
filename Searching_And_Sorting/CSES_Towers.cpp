#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    multiset<ll>m;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        auto it = m.upper_bound(x);
        if(it == m.end()) m.insert(x);
        else {
            m.erase(m.find(*it));
            m.insert(x);
        }
    }

    cout << m.size() << '\n';
}
