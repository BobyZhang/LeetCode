#include <string>
#include <cmath>

class Solution {
public:
    string convert(string s, int numRows) {
        string result = "";
        int one_block = 2 * (numRows - 1);
        one_block = (one_block == 0 ? 1 : one_block);
        
        int blocks = ceil((float)s.size() / one_block);
        
        for (int i = 0, gap = one_block; i < numRows; ++i) {
            for (int b = 0; b < blocks; ++b) {
                int index = b * one_block + i;

                // add the first
                if (index >= s.size()) continue;
                result += s[index];
                if (gap == one_block || gap == 0) continue;
                
                // add the second
                int second = index + gap;
                if (second >= s.size()) continue;
                else result += s[second];
            }
            gap -= 2;
        }
        
        return result;
    }
};