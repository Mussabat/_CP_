#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    set<int>s(v.begin(),v.end());

    for (auto i = s.begin(); i != s.end(); i++) {
        cout <<*i <<endl;
    }
}
