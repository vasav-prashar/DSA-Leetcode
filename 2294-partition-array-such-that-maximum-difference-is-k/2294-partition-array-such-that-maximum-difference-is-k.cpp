class Solution {
public:
   
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int i=0;
        for(int j=1;j<n;j++){
            
            if(nums[j]-nums[i]>k){
                count++;
                i=j;
            }
            
        }
       
        return count+1;
        
    }
};