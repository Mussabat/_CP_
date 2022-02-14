
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    string p;
    cin >> p;
    set<char>ss(p.begin(), p.end());
    for(ll i = 0; i < s.size(); i++) {
        if(ss.count(s[i]) == 0) {
            cout << -1 << '\n';
            return 0;
        }
    }

    map<ll, vector<ll>>m;
    for(ll i = 0; i < p.size(); i++) {
        m[p[i]].push_back(i);
    }
    vector<char>g(ss.begin(), ss.end());

    for(ll i = 0; i < g.size(); i++) {
        m[g[i]].push_back(1e9);
    }

    ll last_idx = 0;
    ll ans = 1;

    for(ll i = 0; i < s.size(); i++) {
        char no = s[i];
        ll mm = lower_bound(m[no].begin(), m[no].end(), last_idx) - m[no].begin();
        ll pp = m[no][mm];
        if(pp == 1e9) {
            ans++;
            last_idx = 0;
            mm = lower_bound(m[no].begin(), m[no].end(), last_idx) - m[no].begin();
            pp = m[no][mm];
            last_idx = pp + 1;

        } else {
            last_idx = pp + 1;
        }
    }

    cout << ans << '\n';

}
