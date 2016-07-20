class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.empty()) {
            return 0;
        }
        
        int last_len = 0;
        
        int idx = s.size() - 1;
        
        // get off the space in tail
        while (idx >= 0 && s[idx] == ' ') --idx;
        
        while (idx >= 0) {
            if (s[idx] == ' ') {    
                break;
            }
            else {
                ++last_len;
            }
            --idx;
        }
        
        return last_len;
    }
};