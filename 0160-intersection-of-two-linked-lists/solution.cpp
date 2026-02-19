/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == headB) return headA;
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        int count = 0;
        while(count!=2){
            temp1 = temp1->next;
            temp2 = temp2->next;
            if(temp1==NULL){
                temp1 = headB;
                count++;
            }
            if(temp2==NULL){
                temp2 = headA;
                count++;
            }
        }
        if(temp1==NULL){
            temp1 = headB;
        }
        if(temp2 == NULL){
            temp2 = headA;
        }
        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};
