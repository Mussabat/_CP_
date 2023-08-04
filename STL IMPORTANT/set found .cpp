
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
    auto i = s.find(20);

            cout << *i <<endl;

    return 0;
}

