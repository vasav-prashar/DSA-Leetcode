class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size(); int j=0;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                ans[j]=nums[i];
                j++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]%2){
                ans[j]=nums[i];
                j++;
            }
        }
        //two pointer
        // for(int i=0;i<n;i++){
        //     if(nums[i]%2==0){
        //         swap(nums[i],nums[j]);
        //         j++;
        //     }
        // }
        return ans;
    }
};