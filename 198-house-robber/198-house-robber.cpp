class Solution {
public:
    //recursive approach
//     int helper(int index,vector<int> &nums){
//         if(index==0)
//             return nums[index];
//         if(index<0)
//             return 0;
//         int pick=nums[index]+helper(index-2,nums);
//         int notPick=0+helper(index-1,nums);
//         return max(pick,notPick);
            
//     }
    
    //top-down memoization
        int helper(int index,vector<int> &nums,vector<int> &dp){
        if(index==0)
            return nums[index];
        if(index<0)
            return 0;
        if(dp[index]!=-1)
            return dp[index];
        int pick=nums[index]+helper(index-2,nums,dp);
        int notPick=0+helper(index-1,nums,dp);
        dp[index]=max(pick,notPick);
        return dp[index];
            
    }
    // bottom-up tabulation
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int pick=nums[i];
            if(i>1)
                pick+=dp[i-2];
            int notPick=0+dp[i-1];
            dp[i]=max(pick,notPick);
        }
        return dp[n-1];
    }
};