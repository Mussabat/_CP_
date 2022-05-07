#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n, sum;
    cin >> n >> sum;

    vector<pair<ll, ll>>v;
    for(ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.push_back({x, i + 1});
    }

    sort(v.begin(), v.end());

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < i; j++) {
            ll l = 0;
            ll r = j - 1;
            if(l >= r) continue;

            ll su = sum - v[i].first - v[j].first;


            while(l < r) {
                ll p = v[l].first;
                ll q = v[r].first;

                if((p + q) == su) {
                    cout << v[l].second << " " << v[r].second << " " << v[i].second << " " << v[j].second << '\n';
                    return 0;

                }

                if((p + q) < su) l++;
                else r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << '\n';
    return 0;

}
