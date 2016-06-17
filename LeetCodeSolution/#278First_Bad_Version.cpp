// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if (isBadVersion(1)) return 1;
        
        /*
        int x = 1, y = n;
        int middle;
        
        while (x + 1 != y) {
            middle = x + (y - x) / 2;  // sothing wrong in middle
            
            if (isBadVersion(middle)) {
                y = middle;
            }
            else {
                x = middle;
            }
        }
        
        return y;
        */
        return binSearch(1, n);
    }
    
    int binSearch(int x, int y) {
        if (x + 1 == y) {
            return y;
        }
        int middle = x + (y - x) / 2;
        
        if (isBadVersion(middle) == true) {
            return binSearch(x, middle);
        }
        return binSearch(middle, y);
    }
    
};