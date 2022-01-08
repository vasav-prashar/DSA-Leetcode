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
    ListNode* middleNode(ListNode* head) {
    //     int len=0;
    //     ListNode* node=head;
    //     if(head==NULL)
    //         return 0;
    //     while(head!=NULL){
    //         head=head->next;
    //         len++;
    //     }
    //     int mid=len/2;
    //     len=0;
    //     while(len!=mid){
    //         node=node->next;
    //         len++;
    //     }
    //     return node;
        ListNode* slow=head;
     ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

        
    }
};