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
    ListNode* insertionSortList(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode *prev = NULL;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *cur = head;
        ListNode *next = NULL;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            ListNode *next1 = prev;
            ListNode *prev1 = next;
            prev = cur;
            if(next1 != NULL && cur->val < next1->val){          
                cur->next = next1->next;
                next1->next = cur;
                prev = next1;
                prev1 = next1;
                next1 = cur->next;
                while(next1 != NULL && cur->val < next1->val){
                    cur->next = next1->next;
                    next1->next = cur;
                    prev1->next = next1;
                    prev1 = next1;
                    next1 = cur->next;
                }
            }
            cur = next;
        }
        head = prev;
        cur = head;
        prev = NULL;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
};
