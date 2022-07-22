class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1) return 0;
        sort(nums.begin(), nums.end());
        int ans = 1;
        int cnt = 1;
        int prev = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++) {
              if(nums[i] == prev) continue;
           if(nums[i] == prev + 1) {
               cnt++;
               prev = nums[i];
           }
            else{
                prev = nums[i];
                cnt = 1;
            }

            ans = max(ans, cnt);
        }

        return ans;
    }
};


Time Complixity : O(n * log n) n = nums.size();
Space complexity : O(1);


class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 1) return 0;
        unordered_set<int>s;
        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
        }
        int cnt = 1;
        int ans = 1;

        for(auto i : s) {
            if(!s.count(i - 1)){
               cnt = 1;
                int prev = i;
                while(s.count(prev + 1)) {
                    cnt++;
                    prev = prev + 1;
                }
            }

             ans = max(ans, cnt);

     }
        return ans;
    }
};


Time Complexity : O(n)
Space Complexity : O(n)
