class Solution {
public:
    bool isPalindrome(string s) {
        int len = s.size();
        if (len == 0) return true;
        
        int start = 0,
            end = len - 1;
        bool isPal = true;
        
        while (start < end) {
            while (!isAlph(s[start])) {
                ++start;
                if (start >= len) break;
            }
            while (!isAlph(s[end])) {
                --end;
                if (end <= 0) break;
            }
            // judge
            if (start > end) break;
            
            // lowcase
            if (isCap(s[start])) s[start] += 32;
            if (isCap(s[end])) s[end] += 32;
            
            if (s[start] != s[end]) {
                isPal = false;
                break;
            }
            
            ++start;
            --end;
        }
        
        return isPal;
    }
    
    bool isAlph(char c) {
        if ('0' <= c && '9' >= c) {
            return true;
        }
        if ('a' <= c && 'z' >= c) {
            return true;
        }
        if ('A' <= c && 'Z' >= c) {
            return true;
        }
        return false;
    }
    
    bool isCap(char c) {
        if ('A' <= c && 'Z' >= c) {
            return true;
        }
        return false;
    }
};