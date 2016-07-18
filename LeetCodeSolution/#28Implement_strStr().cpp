class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        
        int i = 0, j = 0;
        
        int haystack_len = haystack.size();
        int needle_len = needle.size();
        
        while (i + j < haystack_len && j < needle_len) {
            if (haystack[i + j] == needle[j]) {
                ++j;
                if (j == needle_len) return i;
            }
            else {
                ++i;
                j = 0;
            }
        }
        return -1;
    }
};