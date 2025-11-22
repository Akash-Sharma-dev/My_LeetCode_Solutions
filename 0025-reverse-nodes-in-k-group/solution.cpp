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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k == 1) return head;
        int count = 0;
        ListNode *last, *prev = NULL, *cur = head, *after = NULL;
        
        while(count < k && cur != NULL){
            after = cur->next;
            cur->next = prev;
            prev = cur;
            cur = after;
            count++;
        }
        last = head;
        head = prev;
        ListNode *temp;
        while(cur != NULL){
            prev = NULL;
            temp = cur;
            count = 0;
            while(count < k)
            {
            if(cur->next == NULL && k - count > 1){
                while(count){
                    after = prev->next;
                    prev->next = cur;
                    cur = prev;
                    prev = after;
                    count--;    
                }
                prev = cur;
                cur = NULL;
                break;
            }
            after = cur->next;
            cur->next = prev;
            prev = cur;
            cur = after;
            count++;
            }
        last->next = prev;
        last = temp;
        }
        return head;
    }
};
