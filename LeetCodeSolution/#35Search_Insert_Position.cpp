class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // bonduray
        if (nums.empty() || target <= nums[0]) return 0;
        int vecLen = nums.size();
        if (target > nums[vecLen - 1]) return vecLen;
        
        return binSearch(nums, 0, nums.size(), target);
    }
    
    int binSearch(vector<int>& nums, int x, int y, int target) {
        if (x + 1 == y) {
            if (nums[x] == target) {
                return x;
            }
            else {  // nums[y] == target || nums[x] < target < nums[y] 
                return y; 
            }
        }
        
        int middle = (x + y) / 2;
        
        if (target > nums[middle]) {
            return binSearch(nums, middle, y, target);
        }
        else if (target < nums[middle]) {
            return binSearch(nums, x, middle, target);
        }
        // target == nums[middle]
        return middle;
    }
};