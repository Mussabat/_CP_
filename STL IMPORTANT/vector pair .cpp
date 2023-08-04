#include<bits/stdc++.h>

using namespace std;

int  main() {
    int n;
    cin >> n;

    vector<pair<int,int>>y;

    for(int i = 0; i < n ;i++) {
        cin  >> y[i].first >> y[i].second;
    }
    for (int i = 0; i < n; i++) {
        cout << y[i].first << y[i].second << endl;
    }
return 0;

}
