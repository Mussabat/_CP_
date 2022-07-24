class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.size();
     unordered_set<char>ss;
        int i = 0;
        int j = 0;
        int ans = 0;
        while(i < n && j < n) {
            if(ss.count(s[j]) == 0) {
                ans = max(ans, (j - i + 1));
            }
            else {
                char a = s[j];
                while(s[i] != a) {
                ss.erase(ss.find(s[i]));
                   i++;
               }
                i++;
            }

            ss.insert(s[j++]);
        }
        return ans;
    }
};

Time Complexity : O(n^2) n = s.size();
Space Complexity : O(n);


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int l = 0;
        int r = 0;
        vector<int>m(5000, -1);
        while(r < s.size()) {
            if(m[s[r]] != -1) {
                l = max(m[s[r]] + 1, l);
            }

            ans = max(ans, (r - l + 1));
            m[s[r]] = r;
            r++;
        }

        return ans;
    }
};


Time Complexity : O(n) n = s.size();
Space Complexity : O(n);
