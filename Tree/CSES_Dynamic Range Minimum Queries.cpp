#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mx = 3e5 + 9;
const ll inf = 1e18;

ll a[mx];
ll tree[mx * 4];

void build(ll node, ll l, ll r) {
    ll mid = (l + r)/2;
    ll left = (node * 2);
    ll right = (node * 2) + 1;

    if(l == r) {
        tree[node] = a[l];
        return;
    }

    build(left, l, mid);
    build(right, mid + 1, r);

    tree[node] = min(tree[left] , tree[right]);
}


void update(ll node, ll l, ll r, ll idx, ll x) {
    ll mid = (l + r)/2;
    ll left = (node * 2);
    ll right = (node * 2) + 1;

    if(l == r) {
        a[idx] = x;
        tree[node] = a[idx];
        return;
    }

    if(idx <= mid) update(left, l, mid, idx, x);
    else update(right, mid + 1, r, idx, x);

    tree[node] = min(tree[left] , tree[right]);
}


ll query(ll node, ll l, ll r, ll L, ll R) {
    ll mid = (l + r)/2;
    ll left = (node * 2);
    ll right = (node * 2) + 1;

    if(r < L || R < l) return inf;
    if(L <= l && r <= R) return tree[node];

    ll q1 = query(left, l, mid, L, R);
    ll q2 = query(right, mid + 1, r, L, R);

    return min(q1 , q2);

}

int main() {

        ll n, q; scanf("%lld%lld", &n, &q);
        for(ll i = 0; i < n; i++) scanf("%lld", &a[i]);

        build(1, 0, n - 1);

        while(q--) {
            ll t; scanf("%lld", &t);
            if(t == 1) {
                ll i, j; scanf("%lld%lld", &i, &j);
                update(1, 0, n - 1, i - 1, j);
            }

            else {
                ll i, j; scanf("%lld%lld", &i, &j);
                ll sum = query(1, 0, n - 1, i - 1, j - 1);
                printf("%lld\n", sum);
            }
        }

    return 0;
}




