#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>>v;
    for ( int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));

    }
for (int i = 0; i < n; i++) {
    cout << v[i].first <<" "<<v[i].second << endl;
}
}
