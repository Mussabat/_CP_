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
    v.pop_back();
    v.pop_back();
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i <<" ";
    }
    cout<<endl;
    return 0;
}


