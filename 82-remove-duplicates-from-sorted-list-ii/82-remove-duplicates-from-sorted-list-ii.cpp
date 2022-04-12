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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL||head->next==NULL)
            return head;
        int currVal=head->val;
        temp=temp->next;
        if(currVal!=temp->val){
            head->next=deleteDuplicates(temp);
            return head;
        }
        else{
            while(temp&&temp->val==currVal){
                ListNode* dummy=temp;
                temp=temp->next;
                delete dummy;
            }
            delete head;
            return deleteDuplicates(temp);
        }
        
        
    }
};