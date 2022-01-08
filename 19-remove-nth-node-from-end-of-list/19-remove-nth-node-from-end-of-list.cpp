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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        int len=0;
        int l=0;
        while(head!=NULL){
            head=head->next;
            l++;
            
        }
         if(l==n)
            return fast->next;
        while(len!=l-n-1){
            slow=slow->next;
            len++;
            
        }
        
        slow->next=slow->next->next;
        
        
        return fast;
        
        
    }
};