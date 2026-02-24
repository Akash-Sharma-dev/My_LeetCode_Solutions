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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *cur = head;
        ListNode *f,*s;
        while(cur->next!=NULL){
            f = cur;
            s = cur->next;
            int hcf = 1;
            int ans = 1;
            int mini = min(f->val,s->val);
            if(f->val%mini==0 && s->val%mini==0){
                ans = mini;
            }

            while(hcf<mini && ans != mini){
                if(f->val%hcf == 0 && s->val%hcf == 0) ans = hcf;
                hcf++;
            }
            f->next = new ListNode(ans);
            f->next->next = s;
            cur = s;
        }
        return head;
    }
};