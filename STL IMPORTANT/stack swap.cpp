#include<bits/stdc++.h>

using namespace std;

int main() {
      int n, sum;
    cin >> n;

    stack<int>s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }

     stack<int>s1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s1.push(x);
    }
    s1.swap(s);
     while(!s.empty()) {
        cout << s.top() << "  ";
        s.pop();
    }
    cout << endl;
     while(!s1.empty()) {
        cout << s1.top() << "  ";
        s1.pop();
    }
    cout << endl;
    return 0;
}
