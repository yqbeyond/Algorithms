class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        
        if (matrix.empty()) return ret;
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        int s = m > n ? n : m;
        int c, r;
        for (int l = 0; l <= (s - 1) / 2; l++)
        {
            c = n - l - 1;
            r = m - l - 1;
            for (int i = l; i <= c; i++) {ret.push_back(matrix[l][i]);}
            for (int j = l+1; j <= r; j++) {ret.push_back(matrix[j][c]);}
            for (int i = c - 1; i >= l && l < r; i--) {ret.push_back(matrix[r][i]);}
            for (int j = r - 1; j > l && l < c; j--) {ret.push_back(matrix[j][l]);}
        }
        return ret;
    }
};
