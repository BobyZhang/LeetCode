class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        for (int i = 0; i < numRows; ++i) {
            vector<int> row;
            int len = i + 1;
            for (int j = 0; j < len; ++j) {
                if (j - 1 < 0 || j >= i) {
                    row.push_back(1);
                }
                else {
                    row.push_back(result[i - 1][j - 1] + result[i - 1][j]);
                }
            }
            result.push_back(row);
        }
        
        return result;
    }
};