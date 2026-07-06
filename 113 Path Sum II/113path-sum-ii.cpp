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
    void pSum(TreeNode* root, int targetSum, vector<int>path, vector<vector<int>>&allPath){
        if(!root){
            return;
        }
        if(!root->left && !root->right){
            if(targetSum-root->val==0){
                path.push_back(root->val);
                allPath.push_back(path);
            }
            return;
        }
        path.push_back(root->val);
        pSum(root->left,targetSum-root->val,path,allPath);
        pSum(root->right,targetSum-root->val,path,allPath);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        vector<vector<int>>allPath;
        pSum(root,targetSum,path,allPath);
        return allPath;
    }
};