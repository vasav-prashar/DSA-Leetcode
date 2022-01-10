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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* d=head;
        while(head!=NULL&&head->val==val){
                head=head->next;
        }
      
        while(d!=NULL&&d->next!=NULL){
            if(d->next->val==val){
                d->next=d->next->next;
            }
            else
                d=d->next;
        }
        return head;
    }
};