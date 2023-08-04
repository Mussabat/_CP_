#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int>pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    pq.emplace(90);
    pq.emplace(99);
    cout << pq.size() << endl;
    while(!pq.empty()) {
        cout << pq.top() <<"  ";
        pq.pop();
    }
    cout << endl;
    return 0;

}
