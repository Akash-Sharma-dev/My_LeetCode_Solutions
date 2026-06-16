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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        queue<TreeNode*>a;
        queue<TreeNode*>b;
        a.push(p);
        b.push(q);

        while(!a.empty() && !b.empty()){
            TreeNode *cur1 = a.front();
            TreeNode *cur2 = b.front();
                if(!cur1 && !cur2){
                    a.pop();
                    b.pop();
                    continue;
                }
                if(!cur1 || !cur2) return false;
                if(cur1->val != cur2->val) return false;
                a.pop();
                b.pop();
                a.push(cur1->left);
                a.push(cur1->right);
                b.push(cur2->left);
                b.push(cur2->right);
        }
        return true;
    }
};