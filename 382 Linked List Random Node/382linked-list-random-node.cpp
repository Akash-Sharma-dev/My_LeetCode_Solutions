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
    ListNode *head1;
    Solution(ListNode* head) {
        head1 = head;
    }
    
    int getRandom() {
        ListNode * temp = head1;
        int count = 0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp = head1;
        random_device rd;
        mt19937 gen(rd());

        uniform_int_distribution<int> dist(1,count);
        int ran = dist(gen);
        count = 1;
        while(temp->next!= NULL && count<ran){
            temp = temp->next;
            count++;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */