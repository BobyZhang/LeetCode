class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int len = nums.size();
        int x = 0;
        int y = 1;
        int count = 0;
        
        while (y < len) {
            if (nums[y - 1] == nums[y]) {
                ++count;
            }
            else {
                nums[++x] = nums[y];
            }
            ++y;
        }
        
        return len - count;
    }
};