class Solution {
public:
    /*string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty() == true) strs.push_back("");
        
        int index = 0;
        int len = strs.size();
        bool flag = true;
        for (int i = 0; i < strs[0].size(); ++i) {
            if (!flag) break; // if not same anymore
            char same_char = strs[0][index];
            for (int j = 0; j < len; ++j) {
                if (index >= strs[j].size() || same_char != strs[j][index]) {
                    flag = false;
                    break;
                }
            }
            ++index;
        }
        
        if (!flag) --index;
        return strs[0].substr(0, index);
    }*/
    
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty() == true) return "";
        
        int len = strs.size();

        for (int i = 0; i < strs[0].size(); ++i) {
            for (int j = 0; j < len; ++j) {
                if (i >= strs[j].size() || strs[0][i] != strs[j][i]) {
                    return strs[0].substr(0, i);
                }
            }
        }
        return strs[0];
    }
};