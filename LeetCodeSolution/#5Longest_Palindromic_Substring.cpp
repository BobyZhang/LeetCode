// Manacher
// Time O(n)

class Solution {
public:
    string longestPalindrome(string s) {
        string splus = "#";
        int slen = s.size();
        for (int i = 0; i < slen; ++i) {
            splus += s[i];
            splus += '#';
        }
        
        int splus_len = splus.size();
        int* P = (int*)malloc(splus_len * sizeof(int));
        memset(P, 0, splus_len * sizeof(int));
        int id = 0, mx = 0;
        
        
        // Manacher's Algrothim
        for (int i = 0; i < splus_len; ++i) {
            P[i] = mx > i ? min(P[2 * id - i], mx - i) : 1;
            
            while (i - P[i] >= 0 && i + P[i] < splus_len && splus[i - P[i]] == splus[i + P[i]]) ++P[i];
            
            if (mx < i + P[i]) {
                mx = i + P[i];
                id = i;
            }
        }
        
        int center = 0, plen = P[0];
        for (int i = 0; i < splus_len; ++i) {
            if (P[i] > plen) {
                center = i;
                plen = P[i] - 1;
            }
        }
        free(P);
        cout << center << plen;
        int c = center / 2, e = plen / 2;
        return s.substr(c - e, plen);
    }
};