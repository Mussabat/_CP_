//immediate next element which is just greater than k.

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> s;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    auto i = s.lower_bound(2);
   cout << *i << endl;
    return 0;
}

