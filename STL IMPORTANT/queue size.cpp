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

        cout <<q.size() <<endl;
}
