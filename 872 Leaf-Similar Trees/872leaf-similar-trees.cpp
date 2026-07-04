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
    void dfs(TreeNode *root, vector<TreeNode*>&leaf){
        if(!root) return;
        if(!root->left && !root->right){
            leaf.push_back(root);
            return;
        }
        dfs(root->left,leaf);
        dfs(root->right,leaf);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<TreeNode*>leaf1, leaf2;
        dfs(root1,leaf1);
        dfs(root2,leaf2);
        int n1 = leaf1.size(), n2 = leaf2.size();
        if(n1!=n2) return false;
        
        for(int i = 0; i<n1; i++){
            if(leaf1[i]->val != leaf2[i]->val){
                return false;
            }
        }
        return true;
    }
};