#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n; cin >> n;
    vector<pair<ll, ll>>v;
    for(ll i = 0; i < n; i++) {
        ll x, y; cin >> x >> y;
        v.push_back({y, x});
    }

    sort(v.begin(), v.end());
    ll now = 0;
    ll ans = 0;

    for(ll i = 0; i < n; i++) {
        if(v[i].second >= now) {
            ans++;
            now = v[i].first;
        }
    }
    cout << ans << '\n';
}
