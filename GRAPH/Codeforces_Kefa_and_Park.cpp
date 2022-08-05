#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 100005;
vector<ll>adj[mx];
ll mew[mx];
bool mark[mx];
ll n, m;
ll res;

ll dfs(ll u, ll c) {
    mark[u] = 1;
    if(mew[u]) c++;
    else c = 0;
    if(c > m) return 0;


    ll last = 1;
    for(auto v : adj[u]) {
        if(!mark[v]) {
            last = 0;
            dfs(v, c);
        }
    }

    if(last == 1) res++;

    return res;

}

int main() {
    cin >> n >> m;
    for(ll i = 1; i <= n; i++) {
        cin >> mew[i];
   }

   for(ll i = 0; i < n - 1; i++) {
    ll x, y; cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
   }


    ll ans = dfs(1, 0);
   cout << ans << '\n';




}

