#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(100);
        st.push(101);
            st.push(102);
            while(!st.empty())
            {
                cout<<st.top()<<endl;
                st.pop();
                                cout<<st.top()<<endl;a

            }

return 0;
}
