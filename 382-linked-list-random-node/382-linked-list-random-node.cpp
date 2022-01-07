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
    ListNode*t;
public:
    Solution(ListNode* head) {
        t=head;
    }
    
    int getRandom() {
        ListNode*temp=t;
        int len=0,res;
        while(temp!=NULL){
            len++;
            if((rand()%len)==0)
                res=temp->val;
            temp=temp->next;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */