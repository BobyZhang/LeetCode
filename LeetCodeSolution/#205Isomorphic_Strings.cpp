class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int ht_i[256];
        bool ht_j[256];
        
        for (int i = 0; i < 256; ++i)  ht_i[i] = -1000, ht_j[i] = false;
        
        int len = s.size();
        
        for (int i = 0; i < len; ++i) {
            if (ht_i[s[i]] == -1000) {
                if (ht_j[t[i]] == true) return false; 
                ht_i[s[i]] = t[i] - s[i];
                ht_j[t[i]] = true;
            }
            else {
                if (s[i] + ht_i[s[i]] != t[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};