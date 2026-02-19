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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head;
        int size = 0, count = 0;
        while(fast!= NULL && fast->next != NULL){
            fast = fast->next->next;
            count++;
        }
        if(fast==NULL) size = 2*count;
        else size = 2*count+1;
        count = 0;
        int ind = size - n;
        if(ind==0) return head->next;
        ListNode *temp = head;
        while(temp != NULL){
            count++;
            if(count==ind){
                temp->next = temp->next->next;
            }
            temp = temp->next;
        }
        return head;
    }
};
