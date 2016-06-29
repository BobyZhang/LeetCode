class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        
        int len = nums.size();
        int x = 0;
        int y = 0;
        int count = 0;
        
        while (y < len) {
            if (nums[y] == val) {
                ++count;
            }
            else {
                nums[x++] = nums[y];
            }
            ++y;
        }
        
        return len - count;
    }
};