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
    ListNode* partition(ListNode* head, int x) {
        ListNode *head1 = NULL;
        ListNode *head2 = NULL;
        ListNode *temp = head;
        ListNode *temp1 = head1;
        ListNode *temp2 = head2;
        bool flag1 = true, flag2 = true;
        while(temp!=NULL){
            if(temp->val < x){
                if(flag1){
                    head1 = temp;
                    temp1 = head1;
                    flag1 = false;
                }else{
                    temp1->next = temp;
                    temp1 = temp;
                }
                temp = temp->next;
                temp1->next = NULL;
            }else{
                if(flag2){
                    head2 = temp;
                    temp2 = head2;
                    flag2 = false;
                }else{
                    temp2->next = temp;
                    temp2 = temp;
                }
                temp = temp->next;
                temp2->next = NULL;
            }
        }
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
        temp1->next = head2;
        return head1;
    }
};
