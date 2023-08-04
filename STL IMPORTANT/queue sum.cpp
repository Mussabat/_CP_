#include<bits/stdc++.h>

using namespace std;

int main() {
     int n;
    cin >> n;
    queue<int> q;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int sum = 0;
    while(!q.empty()) {
        sum += q.front();
        q.pop();
    }
    cout << sum << endl;
}
