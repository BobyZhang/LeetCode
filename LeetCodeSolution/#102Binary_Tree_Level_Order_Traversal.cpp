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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == NULL) return result;
        
        queue<TreeNode*> que;
        vector<int>* row = new vector<int>;
        
        que.push(root);
        que.push(NULL);
        
        while (!que.empty()) {
            TreeNode* node = que.front();
            que.pop();
            
            if (node == NULL) {
                result.push_back(row[0]);
                row = new vector<int>;
                
                if (!que.empty()) que.push(NULL);
            }
            else {
                row->push_back(node->val);
                
                if (node->left != NULL) que.push(node->left);
                if (node->right != NULL) que.push(node->right);
            }
        }
        
        return result;
    }
};