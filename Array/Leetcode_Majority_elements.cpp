class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int, int>m;
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }
        int c = 0;
        for(auto [i, j] : m) {
            if(j > (nums.size() / 2)) {
                c = i;
                break;
            }
        }
        return c;
    }
};


Time Complexity :  O(n)
Space Complexity : O(n)


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(cnt == 0) {
                ans = nums[i];
                cnt = 1;
            }

            else {

            if(ans == nums[i])cnt++;
            else cnt--;
            }
        }


        return ans;
    }
};

Time Complexity: O(n)  n = nums.size();
Space Complexity: O(1)



