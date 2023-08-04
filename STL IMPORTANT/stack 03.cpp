#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    for(i=0;i<n;i++)
    {
        cout<<s.top()<<' ';
        s.pop();
    }
    return 0;

}


