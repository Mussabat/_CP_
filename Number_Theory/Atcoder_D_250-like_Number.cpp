#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

const ll mxx = 1e18;

#define mx 1000009
bitset <mx> mark;
vector <ll> primes;

void sieve() {
    mark[0] = mark[1] = 1;
    primes.push_back(2);
    int lim = sqrt(mx * 1.0) + 2;
    for (int i = 4; i < mx; i += 2) mark[i] = 1;
    for (int i = 3; i < mx; i += 2) {
        if (!mark[i]) {
            primes.push_back(i);
            if (i <= lim)
                for (int j = i * i; j < mx; j += i)
                    mark[j] = 1;
        }
    }
}




int main() {
    FIO;
    sieve();
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 1; powl(primes[i], 3) <= n; i++) {
        ll d = 1;
        d = (primes[i] * primes[i] * primes[i]);
        ll p = (n / d);
        ll k = primes[i - 1];
        p = min(p, k);
        auto it = upper_bound(primes.begin(), primes.end(), p) - primes.begin();
        ans += it;
    }
    cout << ans << '\n';
    return 0;
}

