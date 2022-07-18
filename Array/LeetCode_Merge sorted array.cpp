class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i = m - 1, j = n + m - 1; i >= 0; i--, j--) {
            swap(nums1[i], nums1[j]);
        }


       vector<int>&ans = nums1;
        int i = 0;
        int j1 = n;
        int j2 = 0;

        for(; j1 < nums1.size() && j2 < nums2.size();) {
            if(nums1[j1] < nums2[j2]) {
                ans[i++] = nums1[j1++];
            }
            else{
                ans[i++] = nums2[j2++];
            }
        }

        while(j1 < nums1.size()) {
            ans[i++] = nums1[j1++];
        }

         while(j2 < nums2.size()) {
            ans[i++] = nums2[j2++];
        }
    }

};


// Time Complexity : O(n + m)
// Space Complexity : O(1)
