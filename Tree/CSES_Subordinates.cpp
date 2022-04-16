#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 2e5 + 9;
vector<ll>adj[mx];
ll ans[mx];
bool mark[mx];


ll dfs(ll u, ll par = -1) {
    ll cur = 0;
    for(auto v : adj[u]) {
        if(v != par) {
            dfs(v, u);
            cur += (1 + ans[v]);
        }
    }

    return ans[u] = cur;
}


int main() {

    ll n; cin >> n;
    for(ll i = 2; i <= n; i++) {
        ll x; cin >> x;
        adj[x].push_back(i);
        adj[i].push_back(x);
    }


    dfs(1);

    for(ll i = 1; i <= n; i++) cout << ans[i] << " ";

    cout << endl;

    return 0;
}
