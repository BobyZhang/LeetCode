class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // make sure the sorted way
        bool sorted = false;
        for (int i = 0; i < m && (i + 1) < m; ++i) {
            if (nums1[i] != nums1[i + 1]) {
                sorted = nums1[i] > nums1[i + 1];
                break;
            }
        }
        for (int j = 0; j < n && j + 1 < n; ++j) {
            if (nums2[j] != nums2[j + 1]) {
                sorted = nums2[j] > nums2[j + 1];
                break;
            }
        }
        
        // merge
        nums1.resize(m + n);
        int n1 = m - 1; 
        int n2 = n - 1;
        int len = m + n - 1;
        while (n1 >= 0 && n2 >= 0 && len >= 0) {
            if ((nums1[n1] >= nums2[n2]) == sorted) {
                nums1[len] = nums2[n2--];
            }
            else {
                nums1[len] = nums1[n1--];
            }
            --len;
        }
        // handle the fisrt one in array
        /*if (n > 0) {
            if ((nums1[0] > nums2[0] && sorted == false) || (nums1[0] < nums2[0] && sorted == true)) {
                nums1[0] = nums2[0];
            }
        }*/
        if (n2 >= 0) {
            while (len >= 0) nums1[len--] = nums2[n2--];
        }
    }
};