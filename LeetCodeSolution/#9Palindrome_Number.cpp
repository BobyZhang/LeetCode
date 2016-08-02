class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x >= 0 && x <= 9) return true;
        
        int n = 0;
        while (x / (int)pow(10, n++) != 0);
        --n;
        
        bool odd;
        if (n % 2 == 1) odd = true;
        else odd = false;

        int left = n / 2;
        int right = odd ? left + 2 : left + 1;
        // cout << "left:" << left << ",right:" << right << endl;
        while (left >= 1) {
            int left_num = (x / (int)pow(10, n - left)) % 10;
            int right_num = (x % (int)pow(10, left)) / (int)pow(10, n - right);
            // cout << "leftNum:" << left_num << ",rightNum:" << right_num << endl;
            if (left_num != right_num) return false;
            --left, ++right;
        }
        
        return true;
    }
};