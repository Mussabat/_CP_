#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int mx = 1.5e5 + 8;


int main() {
    ll n; cin >> n;
    vector<ll>b[32];
    ll a[n + 2];
    for(ll i = 0; i < n; i++) {
       cin >> a[i];
       for(ll j = 0; j <= 30; j++) {
        if((1 << j) & a[i]) {
            b[j].push_back(i);
        }
       }
    }

    for(ll i = 30; i >= 0; i--) {
        if(b[i].size() == 1) {
            ll d = b[i][0];
            swap(a[0], a[d]);
            break;
        }
    }
    for(ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
    return 0;
}

