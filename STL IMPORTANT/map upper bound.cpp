#include<bits/stdc++.h>

using namespace std;

int main() {

         int n;

         cin >> n;
         map<int,int>mp;
         int s;

         for (auto i = 1 ; i <= n; i++) {
            cin >> s;
            mp[i]  = s;
         }
         auto it = mp.lower_bound(3);
         auto itt = mp.upper_bound(3);

         cout<< it->first << endl;//index ta point kortese
         cout <<"***" << it->second <<endl;// ei index e j value ta ase ta point kortese
         cout << itt->first <<endl;
         cout <<"***" <<itt->second << endl;

        /* for (auto i = mp.begin(); i != mp.end(); i++) {
            cout << i->first << " ";
            cout<< i->second <<endl;
         }*/
    return 0;
}

