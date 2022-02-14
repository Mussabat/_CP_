#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()  {
    ll t;  cin >> t;
    while(t--) {
        ll n;  cin >> n;

        ll s = 0;
        for (ll i = 1; i * i <= n; i++)  {
            if(n % i == 0) {
                if(i < n) {
                    s += i;
                }
                if(n/i < n && i != (n/i)) {
                    s += n / i;
                }
            }
        }

        cout << s << endl;

    }

    return 0;
}

