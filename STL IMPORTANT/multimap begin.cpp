#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    multimap<char,int>mp;

    char x;
    for (auto  i = 1; i <= n; i++) {
        cin >> x;
    mp.insert({x,i});

    }

  auto i = mp.begin();
  cout << i->first << endl;
  cout << i->second << endl;
}
