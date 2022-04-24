#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll mx = 2e5 + 9;

#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

ll n;
vector<ll>adj[mx];
ll st[mx];
ll ed[mx];
vector<ll>v[mx];
bitset<mx>mark;
ll tim;

void dfs(ll u, ll d)
{   mark[u] = 1;
    st[u] = tim++;
    v[d].push_back(st[u]);
    for(auto vv : adj[u]) {
        if(!mark[vv]) {
        dfs(vv, d + 1);
        }
    }
    ed[u] = tim++;
}



int main()
{
    FIO;
    cin >> n;
    for(ll i = 2; i <= n; i++) {
        ll p;
        cin >> p;
        adj[p].push_back(i);
    }
    dfs(1, 0);
    ll q;
    cin >> q;
    while(q--) {
        ll u, d;
        cin >> u >> d;
        ll ans = lower_bound(v[d].begin(), v[d].end(), ed[u]) - v[d].begin();
        ans -= lower_bound(v[d].begin(), v[d].end(), st[u]) - v[d].begin();

        cout << ans << '\n';
    }
    return 0;

}

