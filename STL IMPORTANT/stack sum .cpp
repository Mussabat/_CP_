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
    sum = 0;
    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }

    cout << sum << endl;
    return 0;
}
