class Solution {
public:
    string countAndSay(int n) {
        if (n == 0) return "";
        
        vector<string> vec_str;
        
        vec_str.push_back("1");
        for (int i = 0; i < n - 1; ++i) {
            vec_str.push_back(convert(vec_str[i]));
        }
        
        return vec_str[vec_str.size() - 1];
    }
    
    string convert(string str) {
        string result_str = "";

        string digital_str = str;
        int len = digital_str.size();
        int i = 0;
        
        while (i < len) {
            int count = 1;
            char h_char = digital_str[i];
            
            while (++i < len && h_char == digital_str[i]) ++count;

            result_str = result_str + intToString(count) + h_char;
        }
        
        return result_str;
    }
    
    string intToString(int n) {
        
        string str = "";
        char* strArry = new char; // different
        
        int len = sprintf(strArry, "%d", n);
        for (int i = 0; i < len; ++i) str += strArry[i];
        
        delete strArry;
        
        return str;
    }
};