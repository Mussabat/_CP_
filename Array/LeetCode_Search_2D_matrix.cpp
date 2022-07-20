class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool naf = false;

        for(int i = 0; i < matrix.size(); i++) {
            for(int j = 0; j < matrix[0].size(); j++) {
                if(matrix[i][j] == target) {
                    naf = true;
                }
            }
        }
        return naf;

    }
};


Time Complexity : O(n + m) n = matrix.size(); m = matrix[0].size();
Space Complixity : O(1);

//BS

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool naf = false;

        int n = matrix.size();
        int m = matrix[0].size();

        int lo = 0;
        int hi = (m * n) - 1;

        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            if(matrix[mid / m][mid % m] == target) return true;
            else if(matrix[mid / m][mid % m] > target) hi = mid - 1;
            else lo = mid + 1;
        }

        return false;

    }
};

Time Complixity : O(log(n) + log(m))
Space Complixity : O(1);
