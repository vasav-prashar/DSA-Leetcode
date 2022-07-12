class Solution {
public:
    bool helper(vector<int> &matchsticks,int idx,vector<int>&s,int target){
        if(idx>=matchsticks.size()){
            if(s[0]==s[1]&&s[1]==s[2]&&s[2]==s[3])
                return true;
            return false;
        }
        for(int i=0;i<4;i++){
            if(matchsticks[idx]+s[i]>target){
                continue;
            }
            int j = i - 1;  //optimization - 3
            while (j>=0){
                if(s[j] == s[i]){
                    break;
                }
                
                j -= 1;
            }
            
            if(j != -1){
                continue;
            }
            s[i]+=matchsticks[idx];
            if(helper(matchsticks,idx+1,s,target))
                return true;
            s[i]-=matchsticks[idx];
        }
        return false;
    }
    bool makesquare(vector<int>& matchsticks) {
        int n=matchsticks.size();
        int sum=0;
        vector<int> s(4,0);
        for(int i=0;i<n;i++){
            sum+=matchsticks[i];
        }
        int target=sum/4;
        
        return helper(matchsticks,0,s,target);
    }
};