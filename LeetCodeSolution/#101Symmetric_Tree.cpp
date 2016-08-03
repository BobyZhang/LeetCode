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
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true;
        
        return recurrenceIsSymmetric(root->left, root->right);
    }
    
    bool recurrenceIsSymmetric(TreeNode* leftTree, TreeNode* rightTree) {
        if (leftTree == NULL && rightTree == NULL) return true;
        else if (leftTree == NULL || rightTree == NULL) return false;
        
        if (leftTree->val != rightTree->val) return false;
        
        bool side = recurrenceIsSymmetric(leftTree->left, rightTree->right);
        bool mid = recurrenceIsSymmetric(leftTree->right, rightTree->left);
        
        return (side && mid);
    }
};