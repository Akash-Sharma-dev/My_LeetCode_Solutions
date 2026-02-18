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
        
        if(head==NULL || head->next == NULL) return head;
        int count = 0,total = 0;
        ListNode *fast = head;
        
        while(fast != NULL && fast->next!= NULL){
            count++;
            fast = fast->next->next;
        }
        if(fast==NULL) total = 2 * count;
        else total = 2 * count + 1;
        
        k = k%total;
        if(k==0) return head;
        
        int x = total - k;
        count = 1;
        ListNode *temp = head;
        ListNode *prev = NULL;
        ListNode *head1;
        cout<<x<<endl;
        while(temp!=NULL){
            if(count==x){
                head1 = temp->next;
                temp->next = NULL;
                temp = head1;
            }
            count++;
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        return head1;
        
    }
};
