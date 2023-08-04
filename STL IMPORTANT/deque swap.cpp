#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int>dq1;
    deque<int>dq2;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq1.push_back(x);
    }
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq2.push_back(x);
    }
    dq1.swap(dq2);
    for (auto i = dq1.begin(); i != dq1.end(); i++) {
       // cout << *i << endl;
        cout << *i << endl;

    }
    for (auto i = dq2.begin(); i != dq2.end(); i++) {
        cout << *i << endl;
    }
}

