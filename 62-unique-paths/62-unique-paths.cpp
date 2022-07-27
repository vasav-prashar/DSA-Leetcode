class Solution {
public:
    //recursion
    // int recur(int i,int j){
    //     //base cases
    //     if(i==1&&j==1)
    //         return 1;
    //     int ans=0;
    //     if(i<0||j<0)
    //         return 0;
    //     int up=recur(i-1,j);
    //     int left=recur(i,j-1);
    //     return ans=up+left;
    // }
    int topDown(vector<vector<int>> &dp,int m,int n){
        if(m-1==0&&n-1==0)
            return 1;
        if(m-1<0||n-1<0)
           return 0;
        if(dp[m-1][n-1]!=-1)
            return dp[m-1][n-1];
        int up=topDown(dp,m-1,n);
        int left=topDown(dp,m,n-1);
        return dp[m-1][n-1]=up+left;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return topDown(dp,m,n);
    }
};