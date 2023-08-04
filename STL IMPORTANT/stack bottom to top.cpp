#include<bits/stdc++.h>

using namespace std;

void printstack(stack<int> s) {
    if(s.empty())
    return ;

    int x = s.top();
  //  cout <<"**"<<x << endl;
    s.pop();
    printstack(s);
    cout << x <<"   ";
   // cout <<endl;
    s.push(x); //reverse order push hoitese;
   // cout <<"******"<<s.top()<<endl;
}
int main() {
    int n;
    cin >> n;
    stack<int>s;
    for(int i = 0; i <n; i++) {
        int p;
        cin >> p;
        s.push(p);
    }
    printstack(s);
    return 0;

}
