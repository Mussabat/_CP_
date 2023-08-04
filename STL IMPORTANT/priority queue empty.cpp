#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int>q;
    q.push(1);
    if(!q.empty()) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
