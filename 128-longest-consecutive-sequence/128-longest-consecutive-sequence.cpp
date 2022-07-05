class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums[i]-1)==s.end()){
                int count=0,curele=nums[i];
                while(s.find(curele)!=s.end()){
                    count++;
                    curele++;
                }
                res=max(res,count);
            }
        }
        return res;
        
        
    }
};