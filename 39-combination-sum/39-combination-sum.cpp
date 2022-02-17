class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> box;
        recur(0,target,candidates,ans,box);
        return ans;
    }
    void recur(int index,int target,vector<int>& combinations,vector<vector<int>> &ans,vector<int> &box){
        if(index==combinations.size()){

        if(target==0)
        ans.push_back(box);
        return;
        }
        if(combinations[index]<=target){
            box.push_back(combinations[index]);
            recur(index,target-combinations[index],combinations,ans,box);
            box.pop_back();
        }
        recur(index+1,target,combinations,ans,box);
    }
};