/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 // Depth-first Search
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        return recurrenceDepth(root) + 1;
    }
    
    int recurrenceDepth(TreeNode* root) {
        if (root->left == NULL && root->right == NULL) {
            return 0;
        }
        
        int left = 1000000000;
        int right = 1000000000;
        if (root->left != NULL) {
            left = recurrenceDepth(root->left);
        }
        if (root->right != NULL) {
            right = recurrenceDepth(root->right);
        }
        
        return min(left, right) + 1;
    }
};

// Breath-first Search
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        int level = 0;
        queue<TreeNode*> que;
        que.push(root);
        que.push(NULL);
        
        while (!que.empty()) {
            TreeNode* node = que.front();
            que.pop();
            
            if (node == NULL) {
                ++level;
                if (que.empty()) break;
                que.push(NULL);
                continue;
            }
            
            if (node->left != NULL) que.push(node->left);
            if (node->right != NULL) que.push(node->right);
            
            if (node->left == NULL && node->right == NULL) {
                break;
            }
        }
        
        return level + 1;
    }
};