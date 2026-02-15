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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *temp = head;
        ListNode *prev = NULL;
        ListNode *last = NULL;
        bool flag = true;
        while(temp!=NULL){
            while(temp != NULL && ((prev != NULL && temp->val == prev->val) || (temp->next != NULL && temp->val == temp->next->val))){
                prev = temp;
                temp = temp->next;
            }
            if(temp==NULL) break;
            if(flag){
                head = temp;
                flag = false;
            }else{
                last->next = temp;
            }
            last = temp;
            temp = temp->next;
            last->next = NULL;
        }
        if(flag) return NULL;
        return head;
    }
};
