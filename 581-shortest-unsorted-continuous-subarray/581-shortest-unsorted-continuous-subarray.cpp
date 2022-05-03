class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int end=-1;
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(max>nums[i])
                end=i;
            else
                max=nums[i];
        }
        int start=0;
        int min=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(min<nums[i])
                start=i;
            else
                min=nums[i];
        }
        return end-start+1;
        
        // 2
        // int start=0,end=nums.size()-1;
        // vector<int> t=nums;
        // sort(t.begin(),t.end());
        // while(start<=end){
        //     if(nums[start]!=t[start])
        //         break;
        //     start++;
        // }
        // if(start==nums.size()) // if the while array is sorted no violation found
        //     return 0;
        // while(end>=0){
        //     if(nums[end]!=t[end])
        //         break;
        //     end--;
        // }
        // return end-start+1;
    }
};