class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        // int i=0,j=nums.size()-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];    
        }
        sum-=x;
        if(sum==0)
            return nums.size();
        
        int bigg=INT_MIN;
        int s=0;
        int currsum=0;
        for(int end=0;end<nums.size();end++){
            currsum+=nums[end];
            while(currsum>sum&&s<=end){
                currsum-=nums[s];
                s++;
            }
            if(currsum==sum){
                bigg=max(bigg,end-s+1);
                
            }
        }
        if(bigg==INT_MIN)
            return -1;
        return nums.size()-bigg;
        
    }
    
};