#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    queue<char>q;
    for(int i = 0; i < n; i++) {
        char p;
        cin >> p;
        q.push(p);
    }
     cout << q.back() <<endl;
     return 0;
}

