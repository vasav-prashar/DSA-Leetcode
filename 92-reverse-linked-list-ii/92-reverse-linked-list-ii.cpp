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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        //for left index
        ListNode* it=dummy;
        ListNode* previt=NULL;
        for(int i=0;i<left;i++){
            previt=it;
            it=it->next;
        }
        //reverse
        ListNode* itR=it;
        ListNode* prevR=previt;
        for(int i=left;i<=right;i++){
            ListNode* forward=itR->next;
            itR->next=prevR;
            prevR=itR;
            itR=forward;
        }
        //connections
        previt->next=prevR;
        it->next=itR;
        
        return dummy->next;
        
    }
};