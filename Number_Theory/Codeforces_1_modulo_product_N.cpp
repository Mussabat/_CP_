#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);





int main() {
    ll n; cin >> n;
    vector<ll>v;
    ll d = 1;
    for(ll i = 1; i < n; i++) {
        if(__gcd(i, n) == 1) {
            v.push_back(i);
            d = (d * i) % n;
        }
    }
    if(d % n == 1) {
    cout << v.size() << '\n';
    for(auto i : v) {
        cout << i << " ";
    }
    }
    else{
    cout << v.size() - 1 << '\n';
    for(auto i : v) {
        if(i == (d % n)) continue;
        cout << i << " ";
    }
    }
}

