#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string , int> mp;

     string s;
    for(auto i = 1; i <= n; i++) {
        cin >> s;
        mp[s] = i;
    }
    auto i = mp.end();
    i--; //naile error dkhabe...cause eta e tw last element 0 theka indexing shuru;
    cout << i->first << endl;
    cout << i->second << endl;
    return 0;
}
