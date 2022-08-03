#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e18;

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    ll n;
    cin >> n;
    map<string, ll>m;
    vector<pair<ll, string>>v;
    vector<ll>g;
    set<ll>ss;
    for(ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        ll x;
        cin >> x;
        m[s] += x;
        g.push_back(m[s]);
        if(ss.count(m[s]) == 0) {
            ss.insert(m[s]);
            v.push_back({m[s], s});
        }


    }


    ll mx = -inf;
    for(auto [i, j] : m) {
        if(j > mx) {
            mx = j;
        }
    }

    for(ll i = 0; i < v.size(); i++) {
        if(v[i].first >= mx && m[v[i].second] == mx) {
            cout << v[i].second << '\n';
            return 0;
        }
    }


    return 0;

}


