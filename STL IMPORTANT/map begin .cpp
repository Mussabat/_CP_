#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<char,int>mp;
   /* mp['a'] = 1;
    mp['b'] = 2;
    mp['c'] = 3;*/
    char x;
    for (auto  i = 1; i <= n; i++) {
        cin >> x;
        mp[x] = i;

    }

    for (auto i = mp.begin(); i != mp.end(); i++) {
        cout << i->first <<" ";
        cout << i->second << endl;
    }
}
