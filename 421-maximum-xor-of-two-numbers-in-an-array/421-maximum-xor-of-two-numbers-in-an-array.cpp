class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        if(nums.empty())
            return NULL;
        int mask=0,maxi=0;
        for(int i=31;i>=0;i--){
            mask=mask|(1<<i);
            set<int> s;
            for(int i=0;i<nums.size();i++){
                s.insert(mask&nums[i]);
            }
            int temp=maxi|(1<<i);
            
                 for(auto prefix : s){
                
               if(s.count(temp ^ prefix)){
                    maxi = temp;
                    break;
                }
            }
            s.clear();
        }
        return maxi;
    }
};