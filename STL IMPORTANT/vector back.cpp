#include<bits/stdc++.h>

using namespace std;
void fileIO() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int main() {
        fileIO();

     int n;

    cin >> n;
    vector<int>v;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << v.back() << endl;
    return 0;
}

