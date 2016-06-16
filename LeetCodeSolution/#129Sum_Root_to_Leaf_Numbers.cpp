/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        if (root == NULL) return 0;
        
        vector<int> top = recurrenceSum(root, sum);
        
        return sum;
    }
    
    vector<int> recurrenceSum(TreeNode* root, int& sum) {
        vector<int> mergeVec(0);
        if (root == NULL) {
            return mergeVec;
        }
        
        // leaf
        if (root->left == NULL && root->right == NULL) {
            sum += root->val;
            mergeVec.push_back(0);
            return mergeVec;
        }
        
        vector<int> left = recurrenceSum(root->left, sum);
        vector<int> right = recurrenceSum(root->right, sum);
        
        mergeVec = left;
        int len = right.size();
        for (int i = 0; i < len; ++i) mergeVec.push_back(right[i]);
        
        int mergeLen = mergeVec.size();
        for (int i = 0; i < mergeLen; ++i) {
            sum = sum + root->val * pow(10, ++mergeVec[i]);
        }
        
        return mergeVec;
    }
};