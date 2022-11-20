class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n = nums.size();
       int right = n - 1;
       int left = 0;
       vector<int>ans(n);
       for(int i = n - 1; i >= 0; i--) {
           int square;
           if(abs(nums[left]) > abs(nums[right])) {
               square = nums[left];
               left++;
           }
           else{
               square = nums[right];
               right--;
           }

           square = square * square;
           ans[i] = square;
       }

        return ans;
    }
};



/*


Time Complexity: O(N)O(N), where NN is the length of A.

Space Complexity: O(N)O(N) if you take output into account and O(1)O(1) otherwise.

*/
