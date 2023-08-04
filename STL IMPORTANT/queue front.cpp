#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    queue<int>q;
    for(int i = 0; i < n; i++) {
        int p;
        cin >> p;
        q.push(p);
    }
     cout << q.front() <<endl;
     return 0;
}
