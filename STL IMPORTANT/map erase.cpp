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
    mp.erase("TOP");//key er index ta dite hobe erase e;
    for (auto i = mp.begin(); i != mp.end(); i++) {
        cout << i->first << "  ";
        cout << i->second << endl;;
    }
    return 0;
}

