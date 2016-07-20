class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1.empty() || num2.empty()) {
            return "";
        }
        
        int num1_len = num1.size();
        int num2_len = num2.size();
        
        string result = "0";
        
        for (int i = 0; i < num1_len; ++i) {
            string temp = num2;
            int carry = 0;
            for (int j = num2_len - 1; j >= 0; --j) {
                int mul = (int)(num2[j] - '0') * (int)(num1[i] - '0') + carry;
                carry = 0;
                //cout << mul << endl;
                if (mul > 9) {
                    carry = mul / 10;
                    mul %= 10;
                }
                
                temp[j] = (char)(mul + '0');
            }
            
            if (carry > 0) temp = (char)(carry + '0') + temp;
            
            for (int k = num1_len - 1 - i; k > 0; --k) temp += '0';
            
            result = addtion(result, temp);
        }
        
        // the result maybe as "00000"
        return result[0] == '0' ? "0" : result;
    }
    
    string addtion(string num1, string num2) {
        string longstr, shortstr;
        if (num1.size() > num2.size()) {
            longstr = num1;
            shortstr = num2;
        }
        else {
            longstr = num2;
            shortstr = num1;
        }
        
        int longstr_len = longstr.size();
        int shortstr_len = shortstr.size();
        
        int carry = 0;
        int longstr_idx = longstr_len - 1;
        
        for (int i = shortstr_len - 1; i >= 0; --i, --longstr_idx) {
            int sum = (int)(shortstr[i] - '0') + (int)(longstr[longstr_idx] - '0') + carry;
            //cout << sum << endl;
            carry = 0;
            
            if (sum > 9) {
                carry = 1;
                sum %= 10;
            }
            
            longstr[longstr_idx] = (char)(sum + '0');
        }
        
        for (int j = longstr_idx; j >= 0; --j) {
            int sum = (int)(longstr[j] - '0') + carry;
            carry = 0;
            
            if (sum > 9) {
                carry = 1;
                sum %= 10;
            }
            
            longstr[j] = (char)(sum + '0');
        }
        
        if (carry == 1) {
            longstr = '1' + longstr;
        }
        
        return longstr;
    }
};