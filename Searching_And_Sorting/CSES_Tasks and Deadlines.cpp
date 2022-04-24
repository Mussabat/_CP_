#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>>v;
    for(ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());
    ll mns = 0;
    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        mns += v[i].first;
        ans += (v[i].second - mns);
    }

    cout << ans << '\n';
    return 0;
}
