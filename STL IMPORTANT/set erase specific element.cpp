#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    set<int>s;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for (auto i = s.begin(); i != s.end() ; ) {
        if(*i  == p) {
           i = s.erase(i);
        }
        else {
                i++;
        }

    }
     for (auto i = s.begin(); i != s.end() ; i++) {
       cout << *i << endl;

    }
    return 0;
}
