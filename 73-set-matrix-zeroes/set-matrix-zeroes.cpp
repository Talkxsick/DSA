class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> l;
        vector<int> r;
        int n = matrix[0].size();//col
        int m = matrix.size();//row

            for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    l.push_back(i);
                    r.push_back(j);
                }
            }
        }
        for (auto x : l) {
            for (int i = 0; i < n; i++) {
                matrix[x][i] = 0;
            }
        }
        for (auto x : r) {
            for (int i = 0; i < m; i++) {
                matrix[i][x] = 0;
            }
        }
    }
};