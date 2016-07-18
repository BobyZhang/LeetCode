class Solution {
public:
    int myAtoi(string str) {
        const int MAX_INT = (int)((unsigned)~0 >> 1);
        const int MIN_INT = -(int)((unsigned)~0 >> 1) - 1;
        
        int len = str.size();
        int index = 0;
        int sign = 0;
        int result = 0;
        
        while (str[index] == ' ') ++index;
        
        if (str[index] == '-') {
            sign = 1;
            ++index;
        }
        else if (str[index] == '+') {
            sign = 0;
            ++index;
        }
        
        while (str[index] >= '0' && str[index] <= '9' && index < len) {
            int curr_dig = str[index] - '0';
            if (sign == 0 && (MAX_INT / 10 < result || MAX_INT / 10 == result && curr_dig > MAX_INT % 10)) {
                return MAX_INT;
            }
            else if (sign == 1 && ((unsigned)MIN_INT / 10 < result || (unsigned)MIN_INT / 10 == result && curr_dig > (unsigned)MIN_INT % 10)) {
                return -MIN_INT;
            }
            
            result = result * 10 + curr_dig;
            ++index;
        }
        
        return sign == 0 ? result : -result;
    }
};