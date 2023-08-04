#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<int> m;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m.insert(x);
    }
    int p;
    cin >> p;
   auto i = m.lower_bound(p);
   auto it =m. upper_bound(p);
   cout << *i << endl;
   cout << *it << endl;
   return 0;
}
