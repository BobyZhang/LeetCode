class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        if (matrix.empty()) return;
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        // use to set the first line
        bool row_zero = false;
        bool col_zero = false;
        
        for (int i = 0; i < row; ++i) {
            if (matrix[i][0] == 0) row_zero = true;
        }
        for (int j = 0; j < col; ++j) {
            if (matrix[0][j] == 0) col_zero = true;
        }
        
        for (int i = 1; i < row; ++i) {
            for (int j = 1; j < col; ++j) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        // i & j start form 1
        for (int i = 1; i < row; ++i) {
            if (matrix[i][0] == 0) {
                for (int j = 1; j < col; ++j) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        for (int j = 1; j < col; ++j) {
            if (matrix[0][j] == 0) {
                for (int i = 1; i < row; ++i) {
                    matrix[i][j] = 0;
                }
            }
        }
        
        // because i & j started from 1
        if (row_zero == true) {
            for (int i = 0; i < row; ++i) {
                matrix[i][0] = 0;
            }
            
        }
        if (col_zero == true) {
            for (int j = 0; j < col; ++j) {
                matrix[0][j] = 0;
            }
        }
    }
};