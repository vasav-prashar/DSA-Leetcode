class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int n=nums.size();
        int i=0,j=1;
        for(int k=0;k<n;k++){
            if(nums[k]>0){
                ans[i]=nums[k];
                i+=2;
            }
            if(nums[k]<0){
                ans[j]=nums[k];
                j+=2;
            }
            
        }
        return ans;
    }
};