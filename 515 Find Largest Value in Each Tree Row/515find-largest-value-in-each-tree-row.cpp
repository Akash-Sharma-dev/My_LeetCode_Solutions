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
    void largest(TreeNode* cur, int level, vector<int>&res){
        if(cur == NULL) return;
        if(level == res.size()){
            res.push_back(cur->val);
        }else{
            res[level] = max(res[level], cur->val);
        }
        largest(cur->left, level+1, res);
        largest(cur->right, level+1, res);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        largest(root,0,res);
        return res;
    }
};