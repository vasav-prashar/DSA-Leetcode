class Solution {
public:
    // make two array one without last element and one without first element
    int helper(vector<int> &nums,int index,vector<int> &dp){
        if(index==0)
            return nums[0];
        if(index<0)
            return 0;
        if(dp[index]!=-1)
            return dp[index];
        int pick=nums[index]+helper(nums,index-2,dp);
        int notPick=0+helper(nums,index-1,dp);
        return dp[index]=max(pick,notPick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        vector<int> dp(n,-1);
        
        vector<int> withoutFirst(nums.begin()+1,nums.end());
        vector<int> withoutLast(nums.begin(),nums.end()-1);
        
        vector<int> dp1(withoutFirst.size(),-1);
         vector<int> dp2(withoutFirst.size(),-1);
        
        return max(helper(withoutFirst,n-2,dp1),helper(withoutLast,n-2,dp2));
        
    }
};