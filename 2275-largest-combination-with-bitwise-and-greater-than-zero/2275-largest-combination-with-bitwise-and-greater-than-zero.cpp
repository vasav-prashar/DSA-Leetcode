class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans=0;
        for(int i=0;i<32;i++){
            int curr=0;
            for(int j=0;j<candidates.size();j++){
                curr+=(candidates[j]>>i)&1;
                
            }
            ans=max(ans,curr);
        }
        return ans;
    }
};