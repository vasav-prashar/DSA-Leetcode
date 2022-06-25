class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])
                count++;
           if (i - 1 >= 0 && i + 2 < n && (nums[i] > nums[i + 2] && nums[i + 1] < nums[i - 1])&&count>=1)
                return false;
        }
        cout<<count;
        if(count>1)
            return false;
        else
            return true;
    }
};