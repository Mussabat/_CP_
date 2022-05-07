#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    vector<ll>a(n);
    stack<pair<ll, ll>>s;
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(ll i = 0; i < n; i++) {
        while(s.size() > 0 && s.top().first >= a[i]) {
            s.pop();
        }

        if(s.size() > 0) {
            cout << s.top().second << " ";
        }
        else cout << 0 << " ";

        s.push({a[i], i + 1});
    }
    return 0;
}

