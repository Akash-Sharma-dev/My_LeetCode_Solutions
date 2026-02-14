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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *temp = head;
        int count = 1;
        while(temp->next){
            temp = temp->next;
            count++;
        }
        k = k%count;
        while(k--){
            temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            temp->next->next = head;
            head = temp->next;
            temp->next = NULL;
        }
        return head;
    }
};
