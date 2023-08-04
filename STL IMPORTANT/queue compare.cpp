#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    queue<int>q;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    if(q.front() > q.back()) {
    cout <<"1st one yo!! "<<endl;
    }
    else if(q.front() < q.back()) {
        cout <<"Last one yo!! "<<endl;
    }
    else {
        cout<<"Equal"<<endl;
    }
    return 0;
}
