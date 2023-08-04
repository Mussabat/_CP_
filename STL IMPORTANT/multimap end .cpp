#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    multimap<int,int>mp;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        mp.insert({i,x});
    }

auto i = mp.end();
i--;
cout << i->first << endl;
cout << i->second << endl;
return 0;
}

