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
    dq.push_front(120);
    dq.push_front(150);

    for (auto i = dq.begin(); i != dq.end(); i++) {
        cout << *i << endl;
    }
}

