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
    ListNode* sortList(ListNode* head) {
        vector<int>linked;
        ListNode *temp = head;

        while(temp!=NULL){
            linked.push_back(temp->val);
            temp = temp->next;
        }
        sort(linked.begin(),linked.end());
        int n = linked.size();
        temp = head;
        for(int i = 0; i<n; i++){
            temp->val = linked[i];
            temp =temp->next;
        }
        return head;
    }
    
};
