class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // unordered_map<int,int> hash;
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++){
        //     int find=nums[i]-target;
        //     if(hash.find(find)!=hash.end()){
        //         ans.push_back(nums[find]+1);
        //         ans.push_back(i+1);
        //         return ans;
        //     }
        //     hash[nums[i]]=i;
        // }
        // return ans;
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            int d=target-nums[i];
            for(int j=i+1;j<n;j++){
                if(d==nums[j])
                    return {i,j};
            }
           
        }
        return {};
    }
};