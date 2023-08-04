#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    priority_queue<string>pq;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        pq.push(s);
    }
    while(!pq.empty()) {

        cout << pq.top() << endl; ///lexicographically last thekey 1st e print hobe
        pq.pop();
    }
    return 0;
}
