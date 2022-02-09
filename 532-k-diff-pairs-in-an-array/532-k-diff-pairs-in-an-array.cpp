class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       unordered_map<int,int> m;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        if(k==0){
            for (auto& it: m){
                if(it.second>1)
                    count++;
            }
            return count;
        }
        else{
             for (auto& it: m){
                if(m.find(it.first+k)!=m.end())
                    count++;
            }
        }
        return count;
    }
};