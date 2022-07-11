
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int s = nums.size();
        bool ok = (next_permutation(nums.begin(), nums.end()));
            vector<int>ans;

        if(!ok) {

            sort(nums.begin(), nums.end());
        }
        else {
        }


    }
};
