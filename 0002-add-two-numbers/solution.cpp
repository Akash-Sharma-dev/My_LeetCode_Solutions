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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0,digit = 0;
        ListNode *l3 = NULL;
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        ListNode *temp = l3;
        
        while(temp1 != NULL && temp2 != NULL)
        {
            digit = temp1->val + temp2->val + carry;
            carry = digit/10;
            digit = digit%10;
            
            temp1 = temp1->next;
            temp2 = temp2->next;
            ListNode *newNode = new ListNode(digit);
            if(temp == NULL){
                l3 = newNode;
                temp = l3;
            }else{
                temp->next = newNode;
                temp = temp->next;
            }
        }

        while(temp1 != NULL){
            digit = temp1->val + carry;
            carry = digit/10;
            digit = digit%10;

            ListNode *newNode = new ListNode(digit);
            temp->next = newNode;
            temp = temp->next;
            temp1 = temp1->next;
        }

        while(temp2 != NULL){
            digit = temp2->val + carry;
            carry = digit/10;
            digit = digit%10;

            ListNode *newNode = new ListNode(digit);
            temp->next = newNode;
            temp = temp->next;
            temp2 = temp2->next;
        }
        
        while(carry){
            digit = carry%10;
            carry /= 10;
            ListNode *newNode = new ListNode(digit);
            temp->next = newNode;
            temp = temp->next;
        }
        return l3;
    }
};
