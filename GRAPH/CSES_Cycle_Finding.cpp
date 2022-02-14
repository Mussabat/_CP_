#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 1e5 + 2;
const ll inf = 1e15;

struct info{
    ll u;
    ll v;
    ll w;
};


vector<info>e;
ll dist[mx];
ll par[mx];
ll n, m, x;
vector<ll>negPath;

bool BellmanFord(ll source) {

    for(ll i = 0; i <= n; i++) dist[i] = inf;

    dist[source] = 0;

    bool incycle = false;
    x = -1;
    for(ll i = 1; i <= n; i++) {
        incycle = false;
        x = -1;
        for(ll j = 0; j < m; j++) {

            ll uu = e[j].u;
            ll vv = e[j].v;
            ll ww = e[j].w;

                if(dist[uu] + ww < dist[vv]) {
                    dist[vv] = max(-inf, dist[uu] + ww);
                    par[vv] = uu;
                    x = vv;
                    incycle = true;
                }

        }
    }

    if(x != -1) {
        for(ll i = 1; i <= n; i++) {
         x = par[x];
        }


    ll y = x;
    while(y != x || negPath.size() == 0) {
        negPath.push_back(y);
        y = par[y];
    }
    negPath.push_back(x);
    reverse(negPath.begin(), negPath.end());
    }

    return incycle;

}

int main() {
    cin >> n >> m;
    e.clear();
    for(ll i = 0; i < m; i++) {
        ll u, v, w; cin >> u >> v >> w;
        e.push_back({u, v, w});
    }

    if(BellmanFord(1) == 0) {
        cout << "NO" << endl;
        return 0;
    }

    else {
        cout << "YES" << endl;
        for(auto i : negPath) {
            cout << i << " ";

        }
        cout << endl;
       return 0;
    }
}
