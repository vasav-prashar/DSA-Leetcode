class Solution {
public:
//     int helper(vector<int> nums,vector<int> ans){
//         if(nums.size()==1)
//             return nums;
        
//     }
    int minMaxGame(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return min(nums[0],nums[1]);
        int size=nums.size();
       while(size>1){
           size=size/2;
        for(int i=0;i<n/2;i++){
            if(i%2==0){
                nums[i]=min(nums[2*i],nums[2*i+1]);
            }
            else
                nums[i]=max(nums[2*i],nums[2*i+1]);
        }
            
        }
        return nums[0];
    }
};