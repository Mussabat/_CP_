#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;
    ll a[n + 2];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;

    set<ll>s;
    ll j = 0;
    ll i = 0;
    while(i < n && j < n) {
        while(j < n && !s.count(a[j])) {
            s.insert(a[j]);
            ans = max(ans, (j - i + 1));
            j++;
        }
        while(j < n && s.count(a[j])) {
            s.erase(a[i]);
            i++;
        }
    }

    cout << ans << '\n';
    return 0;

}
