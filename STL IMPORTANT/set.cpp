#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin>> n;
    set<int>s;
    for (int i = 0; i < n;i++) {
        int x;
        cin >> x ;
        s.insert(x);
    }
    if(s.size()< 2) {
        cout<<"NO"<<endl;
        return 0;
    }
    auto it = s.begin();
    it++;
    cout<<*it<<endl;
}
