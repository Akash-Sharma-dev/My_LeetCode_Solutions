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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) return NULL;
        vector<ListNode*>temps(n);
        ListNode *l3 = lists[0];
        ListNode *temp;
        ListNode *temp1;
        for(int i = 1; i<n; i++)
        {
            if(l3==NULL){
                l3 = lists[i];
                continue;
            }
            if(lists[i] == NULL){
                continue;
            }
            temps[i] = lists[i];
            temp = l3;
            temp1 = l3;
            if(temps[i]->val <= l3->val)
            {
                l3 = temps[i];
                temp = l3;
                temps[i] = temps[i]->next;
            }else{
                temp1 = temp1->next;
            }
            
            while(temps[i] != NULL && temp1 != NULL)
            {
                if(temps[i]->val <= temp1->val)
                {
                    temp->next = temps[i];
                    temps[i] = temps[i]->next;
                }else
                {
                    temp->next = temp1;
                    temp1 = temp1->next;
                }
                temp = temp->next;
            }
            if(temp1 != NULL){
                temp->next = temp1;
            }else{
                temp->next = temps[i];
            }
        }

        return l3;
        
    }
};
