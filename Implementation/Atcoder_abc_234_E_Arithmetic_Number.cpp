#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    set<ll>ss;
    for(ll i = 1; i <= 9; i++) {
        for(ll j = -9; j <= 8; j++) {
            ll digit = i;
            string s = "";
            for(ll k = 0; k < 18; k++) {
               s.push_back(digit + '0');
               ss.insert(stoll(s));
               digit += j;
               if(digit < 0 || digit > 9) break;
            }
        }
    }


    ll n; cin >> n;
    cout << *ss.lower_bound(n) << '\n';
    return 0;

}

