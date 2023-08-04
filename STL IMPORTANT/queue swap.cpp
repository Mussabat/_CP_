#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int>q1,q2;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q1.push(x);
    }

    int m;
    cin >> m;
    for (int i  = 0; i < m; i++) {
        int s;
        cin >> s;
        q2.push(s);
    }
   /* while(!q1.empty()) {
        cout << q1.front() << "  ";
        q1.pop();
    }
    cout <<endl <<endl;
     while(!q2.empty()) {
        cout << q2.front() << "  ";
        q2.pop();
    }*/
    cout << endl;
    cout <<"AFTER SWAP"<<endl << endl;

    q1.swap(q2);
      while(!q1.empty()) {
        cout << q1.front() << "  ";
        q1.pop();
    }
    cout <<endl <<endl;
     while(!q2.empty()) {
        cout << q2.front() << "  ";
        q2.pop();
    }

}
