#include <cmath>
#define MIN_INT -0xffffff

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result = 0;
        int len = prices.size();
        
        //  creat a vector store max and init
        vector<int> max_vec(len, MIN_INT);
        
        for (int i = 0, sell = 0; i < len; ++i) {
            sell = maxinleft(i + 1, prices, max_vec);
            result = max(result, sell - prices[i]);
        }
        return result;
    }
    
    int maxinleft(int i, vector<int>& prices, vector<int>& max_vec) {
        if (i == prices.size()) {
            return 0;
        }
        if (max_vec[i] == MIN_INT) {
            max_vec[i] = max(prices[i], maxinleft(i + 1, prices, max_vec));
        }
        return max_vec[i];
    }
};