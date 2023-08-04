#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>q;
    q.push(1001);
    q.push(1005);
        q.push(1004);
        while(!q.empty())
        {
            cout<<q.top()<<endl;
            q.pop();
        }
return 0;

}
