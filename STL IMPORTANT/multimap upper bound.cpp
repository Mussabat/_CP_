#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    multimap<int,int>mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp.insert({x,i});  //index onuzaie always sort thakbe
    }
    for(auto i = mp.begin(); i != mp.end(); i++) {
        cout << i->first << "   ";
        cout << i->second << endl;
    }
    int p;
    cin >> p;
    auto t = mp.upper_bound(p);
    cout << t->first <<endl;
    cout << t->second << endl;
    return 0;
}


