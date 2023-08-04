//This function is used to insert a new element into the stack container, the new element is added on top of the stack.


#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int>s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }
    s.emplace(9);
    while(!s.empty()) {
        cout << s.top() << "  ";
        s.pop();
    }
    cout << endl;
    return 0;
}
