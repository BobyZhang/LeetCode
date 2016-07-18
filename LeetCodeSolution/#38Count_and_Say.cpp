class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        
        for (int i = 1; i < n; ++i) {
            int len = result.size();
            string temp = result;
            result = "";
            
            int count = 1;
            
            for (int j = 0; j < len; ++j) {
                if (j + 1 < len && temp[j] == temp[j + 1]) {
                    ++count;
                }
                
                else {
                    stringstream ss;
                    ss << count;
                    result += ss.str() + temp[j];
                    count = 1;
                }
                //cout << result << endl;
            }
        }
        
        return result;
    }
};