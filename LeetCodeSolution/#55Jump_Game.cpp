class Solution {
public:
    bool canJump(vector<int>& nums) {
        int len = nums.size();
        int i = 0, reach = 0;
        
        for(; i < len && i <= reach; ++i) {
            reach = max(reach, i + nums[i]);
        }
        
        return i == len;
    }
};