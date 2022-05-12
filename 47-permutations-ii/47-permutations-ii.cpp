class Solution {
public:
    set<vector<int>> s;
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        vector<vector<int>> res;
        perm(nums,0,ans);
         for(auto i:s){
            res.push_back(i);
        }
        return res;
    }
    void perm(vector<int> &nums,int indx,vector<vector<int>> &ans){
        set<vector<int>> st;
        if(indx>=nums.size()&&st.find(nums)==st.end()){
            s.insert(nums);
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