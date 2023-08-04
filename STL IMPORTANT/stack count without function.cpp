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

    int c = 0;

    while(!s.empty()) {
        s.pop();
        c++;
    }
    cout << c << endl;
    return 0;
}
