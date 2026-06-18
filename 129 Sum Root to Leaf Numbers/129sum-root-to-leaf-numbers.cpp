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
    int sumNumbers(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int res = 0;
        while(!q.empty()){
            TreeNode *cur = q.front().first;
            int num = q.front().second;
            num = num*10 + cur->val;
            q.pop();
            if(!cur->left && !cur->right){
                res += num;
            }
            if(cur->left)
                q.push({cur->left,num});
            if(cur->right)
                q.push({cur->right,num});
        }
        return res;
    }
};