class Solution {
public:
    int recur(vector<int>& nums,int target,int index,int CurrSum){
        if(index==nums.size()&&target==CurrSum)
            return 1;
        if(index>nums.size()-1)
            return 0;
        int p=recur(nums,target,index+1,CurrSum+nums[index]);
        int n=recur(nums,target,index+1,CurrSum-nums[index]);
        return p+n;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int CurrSum=0;
        return recur(nums,target,0,CurrSum);
    }
};