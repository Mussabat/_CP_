#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

int main() {
    ll t; cin >> t;
    while(t--) {
    ll n; cin >> n;
    ll a[n + 2];
    set<ll>ss;
    for(ll i = 0; i < n; i++) {
    cin >> a[i];
    ss.insert(a[i]);
    }

    sort(a, a + n);
    set<ll>s;
    for(ll i = 0; i <= (n / 2); i++) {
    s.insert(a[i] * a[n - i - 1]);
    }
    bool pika = true;
    if(s.size() > 1) pika = false;
    if(s.size() == 1) {
    ll d = *s.begin();
    for(ll i = 2; (i * i) <= d; i++) {
        if(d % i == 0) {
            if(ss.count(i) == 0 || ss.count(d / i) == 0) pika = false;
        }
    }
    }
    if(pika) cout << (*s.begin()) << '\n';
    else cout << -1 << '\n';

    }
}

