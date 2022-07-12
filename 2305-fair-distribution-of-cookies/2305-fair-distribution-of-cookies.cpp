class Solution {
public:
    void helper(vector<int> cookies,int idx,int &ans,int k,vector<int> &bag){
        if(idx==cookies.size()){
            int largest=0;
            for(int i=0;i<bag.size();i++)
                largest=max(largest,bag[i]);
            ans=min(ans,largest);
            return;
        }
            for(int i=0;i<k;i++){
                bag[i]+=cookies[idx];
                helper(cookies,idx+1,ans,k,bag);
                bag[i]-=cookies[idx];
                if(bag[i]==0)
                    break;
            }
        
        
    }
    int distributeCookies(vector<int>& cookies, int k) {
       int n=cookies.size();
        vector<int> bag(k,0);
        int ans=INT_MAX;
        helper(cookies,0,ans,k,bag);
        return ans;
    }
};