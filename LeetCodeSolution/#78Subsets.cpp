class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> result;
        result.push_back(vector<int>(0, 0));
        
        for (int i = 0; i < len; ++i) {
            int count = result.size();
            for (int j = 0; j < count; ++j) {
                vector<int> temp(0, 0);
                temp.insert(temp.begin(), result[j].begin(), result[j].end());
                temp.push_back(nums[i]);
                result.push_back(temp);
            }
        }
        
        return result;
    }
};