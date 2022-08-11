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
    // recursive and we check the range for the node value
    bool validate(TreeNode* root,long low,long high){
        if(!root)
            return true;
        if(root->val<=low||root->val>=high)
            return false;
        return validate(root->left,low,root->val)&&validate(root->right,root->val,high);
        
    }
    bool isValidBST(TreeNode* root) {
        return validate(root,LONG_MIN,LONG_MAX);
        
    }
};