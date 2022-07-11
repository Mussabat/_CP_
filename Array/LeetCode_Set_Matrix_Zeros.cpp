class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        auto martix1 = matrix;
        int n = matrix.size();
        int m = matrix[0].size();
        int r[n + 2];
        int c[m + 2];
        for(int i = 0; i < n; i++) r[i] = 0;
        for(int i = 0; i < m; i++) c[i] = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == 0) {
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }


        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(r[i] == 1 || c[j] == 1) {
                    matrix[i][j] = 0;
                }

            }
        }

    }
};
