#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    multiset<int> m,p;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m.insert(x);
    }
     for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        p.insert(x);
    }
    m.swap(p);
     for (auto i = m.begin(); i != m.end(); i++) {
        cout << *i << "  ";
    }
    cout << endl;
     for (auto i = p.begin(); i != p.end(); i++) { //sorted hishabe print hoy
        cout << *i << "  ";
    }
    return 0;
}

