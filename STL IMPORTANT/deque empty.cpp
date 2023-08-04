#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int>dq;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    if (!dq.empty()) {
        cout << "False" << endl;
    }
    else {
        cout << "True" << endl;
    }
    return 0;
}
