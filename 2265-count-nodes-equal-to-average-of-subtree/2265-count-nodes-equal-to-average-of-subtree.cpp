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
    // we first take a pair function and it first value have sum and second value have count and then we traverse the tree and func parameters have tree root ans count to calculate the ans; 
    
    // O(n)-solution
    
    // pair<int,int> solve(TreeNode* root,int &count){
    //     if(!root)
    //         return {0,0};
    //     pair<int,int> l=solve(root->left,count);
    //     pair<int,int> r=solve(root->right,count);
    //     int sum=l.first+r.first+root->val;
    //     int c=l.second+r.second+1;
    //     if(sum/c==root->val)
    //         count++;
    //     return {sum,c};
    // }
    // int averageOfSubtree(TreeNode* root) {
    //     int count=0;
    //     solve(root,count);
    //     return count;
    // }
    
    // O(n^2)
     int cnt(TreeNode* root){
        return !root ? 0 : 1 + cnt(root->left) + cnt(root->right);
    }
    int sum(TreeNode* root){
        return !root ? 0 : root->val + sum(root->left) + sum(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        if(!root)   return 0;
        int ans = averageOfSubtree(root->left) + averageOfSubtree(root->right);
        return sum(root) / cnt(root)==root->val ? ans + 1 : ans;
    }
};