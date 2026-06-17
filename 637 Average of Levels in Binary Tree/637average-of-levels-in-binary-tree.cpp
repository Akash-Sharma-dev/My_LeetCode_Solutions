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
    void average(TreeNode* root, int level, vector<double>&lsum, vector<int>&ln){
        if(!root) return;
        if(lsum.size() == level){
            lsum.push_back(root->val);
            ln.push_back(0);
        }else
            lsum[level] += root->val;
        ln[level]++;

        average(root->left,level+1,lsum,ln);
        average(root->right,level+1,lsum,ln);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>avg;
        vector<double>lsum;
        vector<int>ln;
        average(root,0,lsum,ln);
        for(int i = 0; i<lsum.size(); i++){
            avg.push_back(lsum[i]/ln[i]);
        }
        return avg;
    }
};