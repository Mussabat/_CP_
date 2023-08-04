#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int>v(n);

    for (auto &x : v) {
        cin >> x;
    }
    int p;
    cin >> p;
    cout <<count(v.begin(), v.end(),p) <<endl;
}
