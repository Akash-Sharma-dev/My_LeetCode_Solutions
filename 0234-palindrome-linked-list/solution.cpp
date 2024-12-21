/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
         int i=0,x;
         vector<ListNode*>add;
         ListNode *slow=head;
         while(slow!=NULL){
            add.push_back(slow);
            slow=slow->next;
         }
         x=add.size()-1;
         while(i<x){
            if(add[i]->val!=add[x]->val){
                return 0;
            }
            i++;
            x--;
         }
         return 1;
    }
};
