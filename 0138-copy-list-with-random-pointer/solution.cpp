/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        unordered_map<Node*, Node*>mpp;
        Node *head1 = new Node(head->val);
        Node *cur = head1;
        Node *temp = head;
        mpp[temp] = cur;

        while(temp!=NULL){
            if(mpp[temp->next] || temp->next == NULL){
                cur->next = mpp[temp->next];
            }else{
                Node *newNode = new Node(temp->next->val);
                cur->next = newNode;
                mpp[temp->next] = newNode;
            }
            if(mpp[temp->random] || temp->random == NULL){
                cur->random = mpp[temp->random];
            }else{
                Node *newRandom = new Node(temp->random->val);
                cur->random = newRandom;
                mpp[temp->random] = newRandom;
            }
            cur = cur->next;
            temp = temp->next;
        }
        return head1;
    }
};
