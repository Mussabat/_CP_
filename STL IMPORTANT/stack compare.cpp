#include<bits/stdc++.h>

using namespace std;

int main() {
      int n,m, sum;
    cin >> n >> m;

    stack<int>s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }

     stack<int>s1;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s1.push(x);
    }
    if(s.size() != s1.size()) {
        cout << "NOT SAME" << endl;
        return 0;
    }
    bool nafisa = true;
   while(!s.empty()) {
    if(s.top()==s1.top()) {
            s.pop();
            s1.pop();

    }
    else {
        nafisa = false;
        break;
    }
   }
   if(nafisa) {
    cout << "SAME  YES!! YES!!" <<endl;
   }
   else {
    cout << "NOT SAME !!!" << endl;
   }
    cout << endl;
    return 0;
}

