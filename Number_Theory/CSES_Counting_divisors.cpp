#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e6 + 2;
ll d[mx];

int main() {

    for(ll i = 1; i < mx; i++) {
        for(ll j = i; j < mx; j += i) {
            d[j]++;
        }
    }

   ll t; cin >> t;
    while(t--) {
      ll n; cin >> n;
        cout << d[n] << '\n';
    }
    return 0;
}

