#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    ll n; cin >> n;
    vector<pair<ll, ll>>v;
    for(ll i = 0; i < n; i++) {
        ll l, r; cin >> l >> r;
        v.push_back({l, r});
    }
    sort(v.begin(), v.end());
    ll l = v[0].first;
    ll r = v[0].second;

    if(n == 1) {
        cout << l << " " << r << '\n';
        return 0;
    }

    for(ll i = 1; i < n; i++) {
        if(v[i].first <= r) {
            r = max(r, v[i].second);
        }
        else {
            cout << l << " " << r << '\n';
            l = v[i].first;
            r = v[i].second;
        }
    }

    cout << l << " " << r << '\n';
}

