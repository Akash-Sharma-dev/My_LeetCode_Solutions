/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) return "";
        queue<TreeNode*>q;
        q.push(root);
        string l,s = "";
        TreeNode *cur;
        while(!q.empty()){
            int n = q.size();
            l = "";
            for(int i = 0; i<n; i++){
                cur = q.front();
                q.pop();
                if(!cur){
                    l += ",null";
                    continue;
                }
                if(cur == root){
                    l += to_string(cur->val); 
                }else
                    l += ","+(to_string(cur->val));
                q.push(cur->left);
                q.push(cur->right);
            }
            if(q.empty()) continue;
            s += l;
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data=="") return NULL;
        TreeNode *root,*cur;
        queue<TreeNode*>q;
        int n = data.length(),nodec = -1;
        string node = "";
        for(int i = 0; i<n; i++){
            if(data[i] != ',')
                node += data[i];
            if(data[i] == ',' || i == n-1){
                nodec++;
                if(nodec==0){
                    root = new TreeNode(stoi(node));
                    q.push(root);
                    node = "";
                    continue;
                }
                if(nodec%2){
                    cur = q.front();
                    q.pop();
                    if(node=="null"){
                        node = "";
                        continue;
                    }
                    cur->left = new TreeNode(stoi(node));
                    q.push(cur->left);
                }else{
                    if(node=="null"){
                        node = "";
                        continue;
                    }
                    cur->right = new TreeNode(stoi(node));
                    q.push(cur->right);
                }
                node = "";
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));