#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll inf = 1e18;
const ll mod = 1e9 + 7;
const ll mx = 1e7 + 8;

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

int main() {
    FIO;
    ll tt; cin >> tt;
    while(tt--) {
    string s, t; cin >> s >> t;
    bool naf = false;
    ll n = s.size();
    ll m = t.size();
    ll p = 0;
    ll j = m - 1;
    for(ll i = n - 1; i >= 0 && j >= 0; i--) {
        if(s[i] == t[j]) {
            p++;
            j--;
        }
        else{
            i--;
        }
        if(p == m) {
            naf = true;
            break;
        }
    }
    if(naf) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    }
    return 0;
}

// statement.....
