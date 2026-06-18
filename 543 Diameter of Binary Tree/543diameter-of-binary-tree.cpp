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
    int maxdi = 0;
    int maxD(TreeNode* root){
        if(!root) return 0;
        int left = maxD(root->left);
        int right = maxD(root->right);
        int d = left + right;
        maxdi = max(maxdi, d);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxD(root);
        return maxdi;
    }
};