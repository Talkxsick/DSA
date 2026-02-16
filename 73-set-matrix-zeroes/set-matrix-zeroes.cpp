class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> s;
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) s.push_back({i,j});
            }
        }
        
        for(auto x : s) {
            int M = x[0];
            int N = x[1];
            for(int i = 0; i < n; i++) {
                matrix[M][i] = 0;
            }
            for(int i = 0; i < m; i++) {
                matrix[i][N] = 0;
            }
        }
    }
};