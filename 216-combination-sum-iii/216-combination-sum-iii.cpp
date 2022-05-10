class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> window;
        helper(1,k,n,ans,window);
        return ans;
    }
    void helper(int index,int k,int n,vector<vector<int>> &ans,vector<int> &window){
        if(k==0&&n==0){
            ans.push_back(window);
            return;
        }
        for(int i=index;i<=10-k&&i<=n;i++){
            window.push_back(i);
            helper(i+1,k-1,n-i,ans,window);
            window.pop_back();
        }
    }
};