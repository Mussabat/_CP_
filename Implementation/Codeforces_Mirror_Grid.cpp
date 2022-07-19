
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

ll n;
ll a[105][105];
ll cnt[105][105];

void rotate_anti_clk(ll nn) {
    ll g[nn + 2][nn + 2];

    for(ll i = 0; i < nn; i++) {
        for(ll j = 0; j < nn; j++) {
            g[nn - j - 1][i] = a[i][j];
        }
    }

    for(ll i = 0; i < nn; i++) {
        for(ll j = 0; j < nn; j++) {
            a[i][j] = g[i][j];
            cnt[i][j] += a[i][j];
        }
    }
}

int main() {
    FIO;
    ll t;
    cin >> t;
    while(t--) {
    cin >> n;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            char x; cin >> x;
            a[i][j] = x - '0';
            cnt[i][j] = a[i][j];
        }
    }

    rotate_anti_clk(n);
    rotate_anti_clk(n);
    rotate_anti_clk(n);


    ll ans = 0;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
           ans += min(cnt[i][j] , 4 - cnt[i][j]);
        }
    }

    cout << ans / 4 << '\n';

    }

    return 0;

}
