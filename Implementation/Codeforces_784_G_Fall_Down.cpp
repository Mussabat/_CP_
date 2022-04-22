#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);


int main() {
    FIO;
    ll t;
    cin >> t;
    while(t--) {
        ll n, m;
        cin >> n >> m;
        char a[n + 2][m + 2];
        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= m; j++) {
                cin >> a[i][j];
            }
        }

        for(ll j = 1; j <= m; j++) {
            for(ll i = n; i > 1; i--) {
                for(ll k = n; k > 1; k--) {
                    if(a[k][j] == '.' && a[k - 1][j] == '*') {
                        a[k][j] = '*';
                        a[k - 1][j] = '.';
                    }
                }
            }
        }


        for(ll i = 1; i <= n; i++) {
            for(ll j = 1; j <= m; j++) {
                cout << a[i][j];
            }
            cout << '\n';
        }
        cout << '\n';

    }
}
