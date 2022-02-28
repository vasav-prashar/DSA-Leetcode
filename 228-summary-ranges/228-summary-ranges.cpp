class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        if(nums.size()==0)
            return ans;
        int a=0,b=0;
        
        for(int i=0;i<nums.size();){
           int start=i,end=i;
            while(end+1<nums.size()&&nums[end+1]==nums[end]+1)
                end++;
            if(end>start)
                ans.push_back(to_string(nums[start])+"->"+to_string(nums[end]));
            else
                ans.push_back(to_string(nums[start]));
            i=end+1;
        }
        return ans;
    }
};