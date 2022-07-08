
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
ll dp[10000];

/*ll solve(ll i) {
   ll &ans = dp[i];
   if(ans != -1) return ans;

   if(i == n) return 1;
   if(i > n) return 0;

   ans = 0;

   ans += solve(i + 1);
   ans += solve(i + 2);
   return ans;
}

int main() {
    cin >> n;
    memset(dp, -1, sizeof dp);
    ll anss = solve(0);
    cout << anss << '\n';
}

Time Complexity : O(n);
Space Complexity : O(n);*/


//Tabulation

/*int main() {
    cin >> n;
    dp[n + 1] = 0;
    dp[n] = 1;
    for(ll i = n - 1; i >= 0; i--) {
        dp[i] = dp[i + 1] + dp[i + 2];
    }
    cout << dp[0] << '\n';
}

Time Complexity : O(n);
Space Complexity : O(n);*/


int main() {
    cin >> n;
    ll prev = 1;
    ll prev1 = 0;

    for(ll i = n - 1; i >= 0; i--) {
        ll cur = prev + prev1;
        prev1 = prev;
        prev = cur;
    }

    cout << prev <<  '\n';
}


Time Complexity : O(n);
Space Complexity : O(1);





