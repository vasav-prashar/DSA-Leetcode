class Solution {
public:
    int missingNumber(vector<int>& nums) {
       // using XOR
        int res=0;
        for(int i=0;i<nums.size();i++){
            res=res^nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            res=res^i;
            
        }
        return res;
        
        //using two sum
        // int sum=0,n=nums.size();
        // sum=n*(n+1)/2;
        // for(int i=0;i<n;i++){
        //     sum=sum-nums[i];
        // }
        // return sum;
    }
};