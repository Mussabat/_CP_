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
    m.erase(p);
    auto i = m.begin();
    i++;
    m.erase(i);
    for (auto i = m.begin(); i != m.end(); i++) {
        cout << *i << "  ";
    }
    return 0;
}
