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
    ListNode * reverseList(ListNode *head){
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *next = NULL;

        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverseList(l1);
        l2 = reverseList(l2);
        int carry = 0,sum;
        ListNode *dummy = new ListNode(0);
        ListNode *cur = dummy;
        while(l1!= NULL || l2!=NULL || carry){
            sum = carry;
            if(l1!=NULL){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2!=NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            cur->next = new ListNode(sum%10);
            cur=cur->next;
            carry = sum/10;
        }
        return reverseList(dummy->next);
    }
};