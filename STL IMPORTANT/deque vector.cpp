#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    deque<int>dq;
    deque<int>::iterator it = dq.begin();
    it++;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    vector<int>vq(5,10); /// koyta 10 nibo tar value ta ;
    dq.insert(it,vq.begin(), vq.end());
    for (auto i = dq.begin(); i != dq.end(); i++) {
        cout << *i << endl;
    }
}

