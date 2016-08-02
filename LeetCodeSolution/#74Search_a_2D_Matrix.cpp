class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        
        int m = matrix.size();
        int top = 0, bottom = m - 1;
        while (top <= bottom) {
            int mid = top + (bottom - top) / 2;
            cout << mid << ',';
            if (matrix[mid][0] > target) {
                bottom = mid - 1;
            }
            else if (matrix[mid][0] < target) {
                top = mid + 1;
            }
            else {
                return true;
            }
        }
        
        top = (top == 0 ? 0 : --top);
        int n = matrix[top].size();
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (matrix[top][mid] > target) {
                right = mid - 1;
            }
            else if (matrix[top][mid] < target) {
                left = mid + 1;
            }
            else {
                return true;
            }
        }
        
        return false;
    }
};