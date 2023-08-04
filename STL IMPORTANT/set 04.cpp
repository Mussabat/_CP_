#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x;
    set<int> s;
    set<int>::iterator it;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        s.insert(x);
    }
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}





