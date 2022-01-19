/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*fast=head,*slow=head;
        ListNode* a=head;
        while(fast&&fast->next){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
               
                while(a!=slow){
                    a=a->next;
                    slow=slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};