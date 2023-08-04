#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<char>q;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        q.push(c);
    }
    char d;
    cin >> d;
    q.emplace(d);

    while(!q.empty()) {
        cout << q.front() <<"   ";
        q.pop();
    }
    cout << endl;
    return 0;
}
