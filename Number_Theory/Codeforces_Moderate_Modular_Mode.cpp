
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    ll t; cin >> t;
    while(t--) {
    ll x, y; cin >> x >> y;
    if(x > y)
    cout << (x + y) << '\n';
    else
        cout << (y - (y % x) / 2) << '\n';
    }
    return 0;
}


