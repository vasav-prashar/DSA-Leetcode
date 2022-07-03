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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        int r=0,c=0,re=m-1,ce=n-1;
        while(c<=ce&&r<=re){
            
            for(int i=c;i<=ce&&head;i++){
                ans[r][i]=head->val;
                head=head->next;
            }
            r++;
            for(int i=r;i<=re&&head;i++){
                ans[i][ce]=head->val;
                head=head->next;
            }
            ce--;
            for(int i=ce;i>=c&&head;i--){
                ans[re][i]=head->val;
                head=head->next;
            }
            re--;
            for(int i=re;i>=r&&head;i--){
                ans[i][c]=head->val;
                head=head->next;
            }
            c++;
            
        }
        return ans;
    }
};