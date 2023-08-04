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
    cout << m.size() <<endl;
    return 0;
}

