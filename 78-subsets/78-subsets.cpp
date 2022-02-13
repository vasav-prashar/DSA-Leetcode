class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> arr1;
        generate(0,arr1,ans,nums);
        return ans;
    }
    void generate(int index,vector<int> &arr1,vector<vector<int>> &arr,vector<int> &nums){
        
            
        arr.push_back(arr1);
        for(int i=index;i<nums.size();i++){
            arr1.push_back(nums[i]);
            generate(i+1,arr1,arr,nums);
            arr1.pop_back();    
        }
    }
};