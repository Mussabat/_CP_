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
    cout << dq.front() << endl;
    return 0;
}
