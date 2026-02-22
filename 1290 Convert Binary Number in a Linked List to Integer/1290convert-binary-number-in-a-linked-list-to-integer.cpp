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
    int getDecimalValue(ListNode* head) {
        int num = 0, digit;
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *next = NULL;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        cur = prev;
        int x = 1;
        int deci = 0;
        while(cur!=NULL){
            digit = cur->val;
            deci += (digit*x);
            x *= 2;
            cur = cur->next;
        }
        return deci;
    }
};