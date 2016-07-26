class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (k >= n) k %= n;
        if (k < 0) {
            k = abs(k);
            if (k >= n) k %= n;
            k = n - k;
        }
        reverse(nums, 0, n - k - 1);
        reverse(nums, n - k, n - 1);
        
        reverse(nums, 0, n - 1);
    }
    
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            ++start;
            --end;
        }   
    }
};