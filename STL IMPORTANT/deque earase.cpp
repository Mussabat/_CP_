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
    for (auto i = dq.begin(); i != dq.end(); i++) {
        if(*i % 2 == 0) {
            dq.erase(i);
            i--;
        }
    }
    for (auto i = dq.begin(); i != dq.end(); i++) {
        cout << *i << endl;
    }

}