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
    int preidx=0;
    TreeNode* build(vector<int> &in,vector<int> &pre,int is,int ie){
        if(is>ie)
            return NULL;
        TreeNode* root=new TreeNode(pre[preidx++]);
        int inidx;
        for(int i=is;i<=ie;i++){
            if(in[i]==root->val){
                inidx=i;
                break;   
            }
        }
        root->left=build(in,pre,is,inidx-1);
        root->right=build(in,pre,inidx+1,ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(inorder,preorder,0,inorder.size()-1);
    }
};