class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        if(n<k)
            return ans;
        vector<int> temp;
        dfs(ans,temp,0,0,n,k);
        return ans;
    }
    void dfs(vector<vector<int>> &ans, vector<int> &temp,int start,int num,int n,int k){
        if(num==k){
            ans.push_back(temp);
        return;
        }
        for(int i=start;i<n;i++){
            temp.push_back(i+1);
            dfs(ans,temp,i+1,num+1,n,k);
            temp.pop_back();
            
        }
    }
    
};