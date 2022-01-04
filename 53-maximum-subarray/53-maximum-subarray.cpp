class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        // int i=0,j=n;
        int max_sum=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
          // sum=0;
            sum+=nums[i];
            max_sum=max(sum,max_sum);
            if(sum<0)
                sum=0;
        }
        return max_sum;
        
    }
};