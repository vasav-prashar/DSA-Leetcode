class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        int count=0;
        for(int i=0;i<n;i++){
           if(i+1<n&&nums[i]==nums[i+1]&&j%2==0)
               count++;
            else
                j++;
            
        }
       if(j%2==1)
           count++;
        return count;
    }
};