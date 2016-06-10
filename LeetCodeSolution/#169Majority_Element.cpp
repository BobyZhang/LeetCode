#include <cstdlib>
int compare(const void* a, const void *b);  
int compare(const void* a, const void *b) { return 1; } // sort does not matter

/* First solution: sort */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // qsort just use in array, not POD or any struct
        // qsort(nums[0], nums.size(), sizeof(int), compare);
        sort(nums.begin(), nums.end());
        return nums[nums.size() / 2];
    }
};

/* Second solution: */
class Solution2 {
public:
    int majorityElement(vector<int>& nums) {
        int ans = nums[0];
        int count = 0;
        int len = nums.size();
        for (int i = 0; i < len; ++i) {
            if (ans == nums[i]) ++count;
            else {
              --count;
              if (count == 0) {
                ans = nums[i];
                count = 1;
              }
            }
        }
        return ans;
    }
}