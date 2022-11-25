class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l = 0;
        int h = arr.size() - 1;
        int ans = 0;
        while(l <= h) {
            int m = (l + h) / 2;
            cout << m << '\n';
           if(arr[m] - m - 1 < k) {
                l = m + 1;
            }

            else{
                h = m - 1;
            }
        }



        return l + k;

    }
};


Time Complexity : O(logN)

Space Complexity : O(1);
