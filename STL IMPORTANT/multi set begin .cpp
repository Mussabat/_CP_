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
    for (auto i = m.begin(); i != m.end(); i++) {
        cout << *i << "  ";
    }
    cout << endl;
    cout <<*(m.begin()) << endl;//sort auto hoye then oitar 1st element print jkre
    cout << *(m.end()) <<endl;
    return 0;
}
