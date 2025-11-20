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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return head;
        if(head->next == NULL) return head;
        ListNode *zero = NULL;
        ListNode *first = head;
        ListNode *second = head->next;
        
        first->next = second->next;
        second->next = first;
        head = second;
        
        while(first->next != NULL && first->next->next != NULL){
            cout<<"Hi";
            zero = first;
            first = first->next;
            second = first->next;

            zero->next = second;
            first->next = second->next;
            second->next = first;
        }
        return head;
    }
};
