
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&a, int n)
    {
        unordered_map<int, int>m;
        int ans = 0;
        int sum = 0;
        m[0] = 0;
        for(int i = 0; i < n; i++) {
          sum += a[i];
          if(m.find(sum) == m.end()) {
              m[sum] = i + 1;
          }
          else {
              int d = (i + 1) - m[sum];
              ans = max(ans, d);
          }
        }

        return ans;
    }
};



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0;
}



Time Complexity : O(n);
Space Complexity : O(n);
