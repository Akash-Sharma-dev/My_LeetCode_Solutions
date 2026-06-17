/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(root == NULL) return root;
        while(!q.empty()){
            TreeNode *cur = q.front();
            q.pop();
            if(!cur->left && cur->right){
                cur->left = cur->right;
                cur->right = NULL;
            }else if(cur->left && !cur->right){
                cur->right = cur->left;
                cur->left = NULL;
            }else
                swap(cur->left, cur->right);
            if(cur->left)
                q.push(cur->left);
            if(cur->right)
                q.push(cur->right);
        }
        return root;
    }
};