class Solution {
public:
    // recursive
    // int solve(vector<int> & nums,int target){
    //     if(target==0)
    //         return 1;
    //     if(target<0)
    //         return 0;
    //     int ans=0;
    //     for(int i=0;i<nums.size();i++){
    //         ans+=solve(nums,target-nums[i]);
    //     }
    //     return ans;
    // }
    // memoization top down
    int solve(vector<int> & nums,int target,vector<int> &dp){
        if(target==0)
            return 1;
        if(target<0)
            return 0;
        
        if(dp[target]!=-1)
            return dp[target];
        dp[target]=0;
        for(int i=0;i<nums.size();i++){
            dp[target]+=solve(nums,target-nums[i],dp);
        }
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        return solve(nums,target,dp);
    }
};