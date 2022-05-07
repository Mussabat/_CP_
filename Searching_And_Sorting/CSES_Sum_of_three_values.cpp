#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {

    ll n, s;
    cin >> n >> s;
    vector<pair<ll, ll>>v;

    for(ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        v.push_back({x, i});
    }

    sort(v.begin(), v.end());

    for(ll i = 0; i < n; i++) {
        ll l = 0;
        ll r = i - 1;

        if(l >= r) continue;

        ll cc = s - v[i].first;

        while(l < r) {
            ll aa = v[l].first;
            ll bb = v[r].first;

            ll sum = aa + bb;

            if(sum == cc) {
                cout << v[l].second << " " << v[r].second << " " << v[i].second << '\n';
                return 0;
            }
            if(sum < cc) l++;
            else r--;
        }
    }

    cout << "IMPOSSIBLE" << '\n';
    return 0;

}

