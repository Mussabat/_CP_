#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

const ll mod = 1e9 + 7;

int main() {
    FIO;
    ll q; cin >> q;
    multiset<ll>m;
    while(q--) {
        ll t; cin >> t;
        if(t == 1) {
          ll x; cin >> x;
          m.insert(x);
        }
        else if(t == 2) {
          ll x, c; cin >> x >> c;
          while(c && m.find(x) != m.end()) {
            m.erase(m.find(x));
            c--;
          }
        }
        else{
          cout << *(m.rbegin()) - *(m.begin()) << '\n';
        }
    }
    return 0;
}


