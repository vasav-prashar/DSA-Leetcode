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
    //using recursion divide and conquer
    TreeNode* bst(vector<int> &nums,int l,int h){
        if(l>h)
            return NULL;
        int mid=(l+h)/2;
        TreeNode* bT=new TreeNode(nums[mid]);
        bT->left=bst(nums,l,mid-1);
        bT->right=bst(nums,mid+1,h);
        return bT;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      return bst(nums,0,nums.size()-1);  
    }
};