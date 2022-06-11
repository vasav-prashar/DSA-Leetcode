class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        int target=totalsum-x;
        int start=0;
        int end=0;
        int currsum=0,ans=-1;
        while(end<n){
            currsum+=nums[end];
            while(start<=end && currsum>target){
                currsum-=nums[start];
                
                start++;
            }
            if(currsum==target){
                ans=max(ans,end-start+1);
            }
            end++;
        }
        if(ans==-1)
            return ans;
        return n-ans;
    }
};