class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1, 0);
        result[0] = 1;
        
        int temp = 0;
        for (int i = 0; i <= rowIndex; ++i) {
            for (int j = 0; j <= i; ++j) {
                int sum = temp + result[j];
                temp = result[j];
                result[j] = sum;
            }
            temp = 0;
        }
        return result;
    }
};