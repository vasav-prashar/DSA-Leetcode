class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
       int n=nums.size();
        unordered_set<int> s;
        int i=0,j=0;
        int sum=0,ans=0;
        while(j<n){
            if(!s.count(nums[j])){
                s.insert(nums[j]);
                sum+=nums[j];
                ans=max(ans,sum);
                j++;
                
            }
            else{
                s.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            
        }
        return ans;
    }
};