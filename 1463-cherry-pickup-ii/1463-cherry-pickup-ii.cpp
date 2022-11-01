class Solution {
public:
    
    //recursion
    int recur(int i,int j1,int j2,int r,int c,vector<vector<int>> &grid){
        if(j1<0||j1>=c||j2<0||j2>=c){//base case out of bounds
            return -1e8;
        }
        if(i==r-1)// destination base case
        {
           if(j1==j2){
               return grid[i][j1];
           } 
            else
                return grid[i][j1]+grid[i][j2];
            
        }
        //explore all paths
        int maxi=INT_MIN;
        for(int d1=-1;d1<=+1;d1++){
            for(int d2=-1;d2<=+1;d2++){
                int val=0;
                if(j1==j2){
                    val=grid[i][j1];
                }
                else
                    val=grid[i][j1]+grid[i][j2];
                val+=recur(i+1,j1+d1,j2+d2,r,c,grid);
                maxi=max(maxi,val);
                
            }
        }
        return maxi;
    }
    // memoization
    int memo(int i,int j1,int j2,int r,int c,vector<vector<int>> &grid,vector<vector<vector<int>>>&dp){
         if(j1<0||j1>=c||j2<0||j2>=c){//base case out of bounds
            return -1e8;
        }
        if(i==r-1)// destination base case
        {
           if(j1==j2){
               return grid[i][j1];
           } 
            else
                return grid[i][j1]+grid[i][j2];
            
        }
        
        if(dp[i][j1][j2]!=-1)
            return dp[i][j1][j2];
        //explore all paths
        int maxi=INT_MIN;
        for(int d1=-1;d1<=+1;d1++){
            for(int d2=-1;d2<=+1;d2++){
                int val=0;
                if(j1==j2){
                    val=grid[i][j1];
                }
                else
                    val=grid[i][j1]+grid[i][j2];
                val+=memo(i+1,j1+d1,j2+d2,r,c,grid,dp);
                maxi=max(maxi,val);
                
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
         vector<vector<vector<int>>> dp(row,vector<vector<int>> (col,vector<int>(col,-1)));
        return memo(0,0,grid[0].size()-1,grid.size(),grid[0].size(),grid,dp);
        // return recur(0,0,grid[0].size()-1,grid.size(),grid[0].size(),grid);
    }
};