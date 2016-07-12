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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        stack<vector<int>> stack_res;
        queue<TreeNode*> que;
        if (root == NULL) {
            return result;
        }
        
        que.push(root);
        que.push(NULL);
        
        vector<int>* row = new vector<int>;
        while (!que.empty()) {
            TreeNode* node = que.front();
            que.pop();
            
            if (node == NULL) {
                stack_res.push(row[0]);
                row = new vector<int>;
                
                // as seperater
                if (!que.empty()) que.push(NULL);
            }
            else {
                row->push_back(node->val);
                
                if (node->left != NULL) que.push(node->left);
                if (node->right != NULL) que.push(node->right);
            }
        }
        
        // get from stack
        while (!stack_res.empty()) {
            result.push_back(stack_res.top());
            stack_res.pop();
        }
        
        return result;
    }
};