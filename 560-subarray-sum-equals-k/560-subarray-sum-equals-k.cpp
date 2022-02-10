class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
      int n=nums.size();
        unordered_map<int,int> m;
        int sum=0;
        
        for(int i=0;i<n;i++){
            m[sum]++;
            sum+=nums[i];
            count+=m[sum-k];
        }
        return count;
       
    }
};