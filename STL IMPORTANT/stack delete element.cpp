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
    int c;
    cin >> c;
    stack<int>s1;
     for (int i = 0; i < n; i++) {
        int x = s.top();
        s.pop();
        if(x != c)
        s1.push(x);
    }


    while(!s1.empty()) {
        cout <<s1.top() << "  ";
        s1.pop();

    }
    return 0;
}


