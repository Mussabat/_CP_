#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / __gcd((a), (b)) * (b))
#define FIO ios_base::sync_with_stdio(0);cin.tie(NULL);

const ll mod = 1e9 + 7;

int main() {
    FIO;
    ll n, a, b; cin >> n >> a >> b;
    ll ans =(n * (n + 1)) / 2;
    ll d = n / a;
    ans -= (((d * (d + 1)) / 2) * a);
    d = n / b;
    ans -= (((d * (d + 1)) / 2) * b);

    d = n / lcm(a, b);
    ans += (((d * (d + 1)) / 2) * lcm(a, b));

    cout << ans << '\n';
    return 0;
}


