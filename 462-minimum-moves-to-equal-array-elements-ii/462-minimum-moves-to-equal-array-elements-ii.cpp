class Solution {
public:
    //sort first
    // find the median and them makethe elements equal to the median and count the ssteps to make it to the median
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int median=n%2==0? (nums[n/2]+nums[(n/2)-1])/2 : nums[n/2];
      
        int steps=0;
        for(int i=0;i<n;i++){
            steps+=abs(median-nums[i]);
        }
        return steps;
    }
};