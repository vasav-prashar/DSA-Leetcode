class Solution {
public:
    int recur(int amount,vector<int>& coins,int index)
    {
        if(index==0){
            return amount%coins[0]==0;
        }
        int notTake=recur(amount,coins,index-1);
        int take=0;
        if(coins[index]<=amount)
            take=recur(amount-coins[index],coins,index);
        return take+notTake;
    }
     int memo(int amount,vector<int>& coins,int index,vector<vector<int>>& dp)
    {
        if(index==0){
            return dp[index][amount]=amount%coins[0]==0;
        }
         if(dp[index][amount]!=-1)
             return dp[index][amount];
        int notTake=memo(amount,coins,index-1,dp);
        int take=0;
        if(coins[index]<=amount)
            take=memo(amount-coins[index],coins,index,dp);
        return dp[index][amount]=take+notTake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return memo(amount,coins,n-1,dp);
    }
};