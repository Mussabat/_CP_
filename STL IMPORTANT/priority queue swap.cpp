///type and size same na hole error dkhaitese;

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n ;
    priority_queue<int>pqint;
    priority_queue<int>pqstr;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pqint.push(x);
    }
    for (int i = 0; i < n; i++) {
        int  y;
        cin >> y;
        pqstr.push(y);
    }
    pqint.swap(pqstr);
    while(!pqint.empty()) {
        cout << pqint.top() << "   ";
        pqint.pop();
    }
    cout << endl;
     while(!pqstr.empty()) {
        cout << pqstr.top() << "   ";
        pqstr.pop();
    }
    return 0;
}
