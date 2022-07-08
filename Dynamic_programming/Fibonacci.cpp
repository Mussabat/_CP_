#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {

    ll n; cin >> n;
    ll dp[n + 2];
    dp[0] = 0;
    dp[1] = 1;
    for(ll i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << dp[n] << '\n';
}

Time Complexity : O(n);
Space Complexity : O(n);



/*#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {

    ll n; cin >> n;
    ll prev = 1;
    ll prev1 = 0;

    for(ll i = 2; i <= n; i++) {
        ll cur = prev + prev1;
        prev1 = prev;
        prev = cur;
    }
    cout << prev << '\n';
}


Time Complexity : O(n)
Space Complexity : O(1);*/









