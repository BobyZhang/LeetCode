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
    bool isBalanced(TreeNode* root) {
        if (root == NULL) return true;
        
        int leftH = getTreeHight(root->left);
        int rightH = getTreeHight(root->right);
        
        if (leftH == -1 || rightH == -1) return false;
        
        int maxH = max(leftH, rightH);
        int minH = min(leftH, rightH);
        
        if (maxH - minH > 1) return false;
        
        return true;
    }
    
    int getTreeHight(TreeNode* node) {
        if (node == NULL) {
            return 0;
        }
        
        int leftH = getTreeHight(node->left);
        int rightH = getTreeHight(node->right);
        
        if (leftH == -1 || rightH == -1) return -1;
        
        int maxH = max(leftH, rightH);
        int minH = min(leftH, rightH);
        
        if (maxH - minH > 1) return -1;
        
        return maxH + 1;
    }
};