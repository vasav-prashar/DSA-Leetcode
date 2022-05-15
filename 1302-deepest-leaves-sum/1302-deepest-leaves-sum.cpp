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
    map<int,vector<int>> m;
    int maxi=0;
    int deepestLeavesSum(TreeNode* root) {
        int res=0;
        dfs(root,0);
        for(int i=0; i< m.rbegin()->second.size();i++)
            res+= m.rbegin()->second[i];
        return res;
    }
    void dfs(TreeNode* root, int height){
        if(root==NULL)
            return;
        dfs(root->left,height+1);
        m[height].push_back(root->val);
        maxi=max(maxi,height);
        dfs(root->right,height+1);
    }
};