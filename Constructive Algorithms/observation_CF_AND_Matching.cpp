#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        if(n == 4 && k == 3) {
            cout << -1 << '\n';
            continue;
        }
        if(k == n - 1) {
            cout << n - 2 << " " << n - 1 << '\n';
            cout << 1 << " " << n - 3 << '\n';
            cout << 0 << " " << 2 << '\n';
            for(ll i = 3; i < (n / 2); i++) {
                cout << i << " " << n - i - 1 << '\n';
            }
        } else {
            if(k == 0) {
                cout << 0 << " " << n - 1 << '\n';
            }
            for(ll i = 1; i < (n / 2); i++) {
                if(i == k || (n - i - 1) == k) {
                    cout << k << " " << n - 1 << '\n';
                    cout << 0 << " " << n - k - 1 << '\n';
                    continue;
                }
                cout << i << " " << n - i - 1 << '\n';
            }
        }
        //cout << '\n' << '\n';
    }
    return 0;
}


/*
x & (n - 1) = x because here n is powwer of 2...n - 1 = 1111..;
x & 0 = 0'
form k & (n - 1) to get k;
diff case in n - 1 == k;
101 er complement er sathe and kor 0 ahse 010;
so i er ta n - i - 1;
*/

