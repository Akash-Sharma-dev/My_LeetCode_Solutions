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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int count = right - left;
        ListNode *temp = head;
        ListNode *last = head;
        int i = left-1;
        while(i--){
            last = temp;
            temp = temp->next;
        }
        cout<<temp->val<<endl;
        ListNode *prev = temp;
        ListNode *cur = temp->next;
        ListNode *next;
        cout<<count<<" ";
        while(cur != NULL && count--){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        cout<<last->val;//<<" "<<cur->val<<endl;
        if(left == 1) head = prev;
        else last->next = prev;
        temp->next = cur;
        return head;
    }
};
