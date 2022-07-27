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
    // first we make the right sub tree in list and then left and then attach the last node of left tree with riight node of the right sub tree
    TreeNode* prev=NULL;
    void flatten(TreeNode* root) {
        if(!root)
            return;
        flatten(root->right);
        flatten(root->left);
        root->left=NULL;
        root->right=prev;
        prev=root;
    }
};