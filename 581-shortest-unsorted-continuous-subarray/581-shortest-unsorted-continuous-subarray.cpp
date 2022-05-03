class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        vector<int> t=nums;
        sort(t.begin(),t.end());
        while(start<=end){
            if(nums[start]!=t[start])
                break;
            start++;
        }
        if(start==nums.size())
            return 0;
        while(end>=0){
            if(nums[end]!=t[end])
                break;
            end--;
        }
        return end-start+1;
    }
};