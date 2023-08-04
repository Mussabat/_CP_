
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
    auto i = s.begin();
    s.erase(i);
    for (auto i = s.begin(); i != s.end(); i++) {
            cout << *i <<endl;
    }
    return 0;
}
