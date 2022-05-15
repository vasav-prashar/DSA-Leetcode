class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans=0;
        for(int i=1;i<=*max_element(begin(candidates),end(candidates));i<<=1){
            int curr=0;
            for(int j=0;j<candidates.size();j++){
                curr+=(candidates[j]&i)>0;
                
            }
            ans=max(ans,curr);
        }
        return ans;
    }
};