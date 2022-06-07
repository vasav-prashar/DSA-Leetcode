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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a_pointer=headA,*b_pointer=headB;
        while(b_pointer!=NULL&&a_pointer!=NULL&&a_pointer!=b_pointer){
            a_pointer=a_pointer->next;
            b_pointer=b_pointer->next;
            
             if(a_pointer==b_pointer)
                 return a_pointer;
            
            if(a_pointer==NULL)
                a_pointer=headA;
             if(b_pointer==NULL)
                b_pointer=headB;
            
            
        }
        return a_pointer;
        
    }
};