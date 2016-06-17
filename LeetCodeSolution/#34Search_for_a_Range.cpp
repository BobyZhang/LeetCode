class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        
        int numsLen = nums.size();
        if (nums.empty() || target < nums[0] || target > nums[numsLen - 1]) {
            return result;
        }
        
        if (nums[0] == target) {
            result[0] = 0;
            int end = 0;
            while(end < numsLen && nums[end] == target) result[1] = end++;
            return result;
        }
        
        int index = binSearch(nums, 0, numsLen - 1, target);
        
        
        int x = index;
        int y = index;
        
        while(nums[x] == target) result[0] = x--;
        while(y < numsLen && nums[y] == target) result[1] = y++;
        
        return result;
    }
    
    int binSearch(vector<int>& nums, int x, int y, int target) {
        if (x + 1 == y) {
            return y;
        }
        int middle = x + (y - x) / 2;
        
        if (nums[middle] > target) {
            return binSearch(nums, x, middle, target);
        }
        else if (nums[middle] < target) {
            return binSearch(nums, middle, y, target);
        }
        
        return middle;
    } 
};