class Solution {
public:
    int recur(vector<vector<int>>& grid,int i,int j){
        if(i==0&&j==0)// base case 
            return grid[i][j];
        if(i<0||j<0)
            return 100;//for out of bounds 
        long long up=grid[i][j]+recur(grid,i-1,j);
        long long left=grid[i][j]+recur(grid,i,j-1);
        return min(up,left);
    }
    // top down memoization
    int topDown(vector<vector<int>>& grid,int i,int j,vector<vector<int>> &dp){
        if(i==0&&j==0)// base case 
            return grid[i][j];
        if(i<0||j<0)
            return INT_MAX;//for out of bounds 
        if(dp[i][j]!=-1)
            return dp[i][j];
        long long up=topDown(grid,i-1,j,dp);
        long long left=topDown(grid,i,j-1,dp);
        return dp[i][j]=grid[i][j]+min(up,left);
    }
    
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0)
                    dp[i][j]=grid[0][0];
                else{
                int up=grid[i][j];
                int left=grid[i][j];
                if(i>0)
                    up+=dp[i-1][j];
                else 
                    up=INT_MAX;
                if(j>0)
                    left+=dp[i][j-1];
                    else
                        left=INT_MAX;
                dp[i][j]=min(left,up);
                }
            }
        }
        return dp[n-1][m-1];
        // return topDown(grid,n-1,m-1,dp);
    }
};