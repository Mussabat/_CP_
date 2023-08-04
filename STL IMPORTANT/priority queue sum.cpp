#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int>pq;
    for (int i  = 0; i < n; i++) {
            int x;
            cin >> x;
            pq.push(x);

    }
    int sum = 0;
    while(!pq.empty()) {
            sum += pq.top();
                pq.pop();

    }
    cout << sum << endl;
    return 0;
}


