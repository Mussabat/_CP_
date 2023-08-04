#include<bits/stdc++.h>

using namespace std;

int main() {

         int n;

         cin >> n;
         map<int,string>mp;
         string s;

         for (auto i = 1 ; i <= n; i++) {
            cin >> s;
            mp[i]  = s;
         }

        /* for (auto i = mp.begin(); i != mp.end(); i++) {
            cout << i->first << " ";
            cout<< i->second <<endl;
         }*/
        // auto it = mp.at(2);
         cout << mp.at(2) << endl;
    return 0;
}

