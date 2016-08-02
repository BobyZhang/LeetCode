class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        vector<int> count(n + 1, 0);
        
        for (auto i : citations) {
            if (i >= n) {
                ++count[n];
            }
            else {
                ++count[i];
            }
        }
        
        int h = 0;
        for (int i = n; i >= 0; --i) {
            h += count[i];
            if (h >= i) {
                return i;
            }
        }
        return h;
    }
};