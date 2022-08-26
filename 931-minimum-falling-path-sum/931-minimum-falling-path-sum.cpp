class Solution {
public:
    int recur(vector<vector<int>> &matrix,int i,int j){
        if(j<0||j>=matrix[0].size()||i<0)
            return 1e9;
        if(i==0)
            return matrix[0][j];
        int ld=matrix[i][j]+recur(matrix,i-1,j-1);
        int st=matrix[i][j]+recur(matrix,i-1,j);
       
        int rd=matrix[i][j]+recur(matrix,i-1,j+1);
        return min(st,min(ld,rd));
    }
    
    // memoizatiion top-down
    int memo(vector<vector<int>> &matrix,int i,int j,vector<vector<int>>& dp){
        if(j<0||j>=matrix[0].size()||i<0)
            return 1e9;
        if(i==0)
            return matrix[0][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ld=matrix[i][j]+memo(matrix,i-1,j-1,dp);
        int st=matrix[i][j]+memo(matrix,i-1,j,dp);
        int rd=matrix[i][j]+memo(matrix,i-1,j+1,dp);
        
        return dp[i][j]=min(st,min(ld,rd));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int ans=1e9;
        for(int j=0;j<n;j++)
            ans=min(ans,memo(matrix,n-1,j,dp));
        return ans;
    }
};