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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* start=head,*end=head,*count=head;
        int len=0;
        while(count){
            len++;
            count=count->next;
        }
        for(int i=0;i<k-1;i++){
            start=start->next;
        }
        for(int i=0;i<len-k;i++){
            end=end->next;
        }
        swap(start->val,end->val);
        return head;
    }
};