class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int steps=0;
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
        }
        for(int i=0;i<n;i++){
            steps+=abs(mini-nums[i]);
        }
        return steps;
    }
};