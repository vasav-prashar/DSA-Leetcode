class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        perm(nums,0,ans);
        return ans;
    }
    void perm(vector<int> &nums,int indx,vector<vector<int>> &ans){
        if(indx>=nums.size()){
            ans.push_back(nums);
             return;
        }
        else{
        for(int i=indx;i<nums.size();i++){
            swap(nums[indx],nums[i]);
            perm(nums,indx+1,ans);
            swap(nums[indx],nums[i]);
        }
        }
        
    }
};