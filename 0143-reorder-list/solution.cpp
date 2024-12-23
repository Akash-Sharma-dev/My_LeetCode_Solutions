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
    void reorderList(ListNode* head) {
        stack<ListNode*> myStack;
            ListNode *first = head;
                ListNode *last = head;
                    while(last!=NULL && last->next!=NULL){
                            first=first->next;
                                    last=last->next->next;
                                        }
                                            while(first!=NULL){
                                                    myStack.push(first);
                                                            first=first->next;
                                                                }
                                                                    first = head;
                                                                        last = myStack.top();
                                                                            myStack.pop();
                                                                                while(!myStack.empty()){
                                                                                        last->next = first->next;
                                                                                                first->next = last;
                                                                                                        first = last->next;
                                                                                                                last = myStack.top();
                                                                                                                        myStack.pop();
                                                                                                                            }
                                                                                                                                last->next=NULL;
    }
};
