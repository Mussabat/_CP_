#include<bits/stdc++.h>

using namespace std;
void fileIO() {
    freopen("in", "r",stdin);
    freopen("out", "w", stdout);
}
int main() {
    fileIO();
    vector<int>v;
    v.assign(4,50);
    for (int i = 0; i != v.size() ; i++) {
            cout << v[i] <<" ";

    }
    cout<<endl;
    return 0;
}
