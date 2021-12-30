class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> leftsum(n);
        vector<int> rightsum(n);
        vector<int> ans(n);
        leftsum[0]=1;
        rightsum[n-1]=1;
        for(int i=1;i<n;i++)
            leftsum[i]=nums[i-1]*leftsum[i-1];
        for(int i=n-2;i>=0;i--)
            rightsum[i]=rightsum[i+1]*nums[i+1];
        for(int i=0;i<n;i++){
            ans[i]=leftsum[i]*rightsum[i];
        }
        return ans;
        
        
    }
};