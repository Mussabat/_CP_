#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const int mx = 1e6 + 9;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    ll t; cin >> t;
    ll sum = 0;
    while(t--) {
     ll x; cin >> x;
     ll p = 1;
     ll ans = 0;
     while(x > 0) {
       ll digit = x % 10;
       x = x  / 10;
       if(digit > 7) digit--;
       ans += (digit * p);
       p *= 9;

    }
    sum += ans;
    }
    cout << sum << '\n';

    return 0;
}


