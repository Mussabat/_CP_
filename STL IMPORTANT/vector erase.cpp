#include<bits/stdc++.h>

using namespace std;

int main() {

     int n;

    cin >> n;
    vector<int>v;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    auto i = 2;
    v.erase(v.begin()+i);
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i <<" ";
    }
    return 0;
}
