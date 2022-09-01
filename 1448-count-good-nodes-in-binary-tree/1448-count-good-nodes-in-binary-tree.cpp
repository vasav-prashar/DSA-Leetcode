/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void countGood(TreeNode* root,int &count,int maxi){
        if(!root)
            return;
        if(root->val>=maxi){
            count++;
            maxi=root->val;
        }
        countGood(root->left,count,maxi);
        countGood(root->right,count,maxi);
    }
    
    int goodNodes(TreeNode* root) {
       int count=0;
        countGood(root,count,root->val);
        return count;
    }
};