class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits.empty()) {
            vector<int> result(1, 1);
            return result;
        }
        
        int carry = 0;
        int len = digits.size();
        digits[len - 1] += 1;
        if (digits[len - 1] > 9) {
            digits[len - 1] %= 10;
            carry = 1;
        }
        
        for (int i = digits.size() - 2; i >= 0; --i) {
            digits[i] = digits[i] + carry;
            carry = 0;
            if (digits[i] > 9) {
                digits[i] %= 10;
                carry = 1;
            }
        }
        
        vector<int> result;
        if (carry == 1) {
            result.push_back(1);
        }
        
        for (int i = 0; i < len; ++i) {
            result.push_back(digits[i]);
        }
        
        return result;
    }
};