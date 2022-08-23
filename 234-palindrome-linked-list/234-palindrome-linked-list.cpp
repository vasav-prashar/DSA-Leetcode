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
    // take the 2 pointer and get the half then slow pointer onwards we reverse the link list and then we compare it with the starting first half of the link list till slow pointer reaches start if all values equal return true otherwise return false;
    ListNode* reverse(ListNode* head){
        ListNode*prev=NULL,*next=NULL;
        while(head){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
       ListNode* s=head,*fast=head;
        if(head==NULL||head->next==NULL)
            return true;
        while(fast->next!=NULL&&fast->next->next!=NULL)
        {
            s=s->next;
            fast=fast->next->next;
        }
        s->next=reverse(s->next);
        s=s->next;
        while(s!=NULL){
            if(head->val!=s->val)
                return false;
            head=head->next;
            s=s->next;
        }
        return true; 
        
    }
};