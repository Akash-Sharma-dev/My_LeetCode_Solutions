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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        TreeNode *cur;
        bool flag = true;
        int ind = 0;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level(size);

            for(int i = 0; i<size; i++){
                cur = q.front();
                q.pop();
                if(flag) ind = i;
                else ind = size-i-1;
                level[ind] = cur->val;
                if(cur->left)
                q.push(cur->left);
                if(cur->right)
                q.push(cur->right);
            }
            ans.push_back(level);
            flag = !flag;
        }
        return ans;
    }
};