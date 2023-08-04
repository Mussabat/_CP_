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

       /*  for (auto i = mp.begin(); i != mp.end(); i++) {
            cout << i->first << " ";
            cout<< i->second <<endl;
         }*/
        if( mp.count("yu")) {  //index er nmbr or element ta rakhte hoy
            cout <<"Present" <<endl;
        }
        else {
            cout << "NOT PRESENT "<<endl;
        }
       // cout << mp.count(2) << endl; //error ashbe cause index na;
      //  cout << mp.count("yy") << endl; // r eta 3 4 bar nile o 1 ashbe cause map e similar element 1 tai thake

    return 0;
}

