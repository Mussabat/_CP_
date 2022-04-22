#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

struct node{
    ll from;
    ll to;
    ll idx;
};


bool cmp(node a, node b) {
    if(a.to == b.to) return a.from < b.from;
    else return a.to < b.to;
}


int main() {
    FIO;
    ll n; cin >> n;
    struct node a[n + 2];
    for(ll i = 0; i < n; i++) {
        cin >> a[i].from >> a[i].to;
        a[i].idx = i;
    }

    sort(a, a + n, cmp);

    vector<bool>mark(10000000, false);

    vector<ll>ans(n, 0);

    for(ll i = 0; i < n; i++) {
        for(ll j = a[i].from; j <= a[i].to; j++) {
            if(!mark[j]) {
                mark[j] = true;
                ans[a[i].idx] = j;
                break;
            }
        }
    }

    for(auto i : ans) cout << i << " ";
    cout << '\n';
    return 0;


}

