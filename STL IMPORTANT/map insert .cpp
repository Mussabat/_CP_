
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
    mp.insert({"neww",5}); ///bt jodi neww ta age e thake map e eta insert krle 1st er tar e index dkhabe same element thake na
    for (auto i = mp.begin(); i != mp.end(); i++) {
        cout << i->first << "  ";
        cout << i->second << endl;;
    }
    return 0;
}
