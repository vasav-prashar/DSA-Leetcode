class Solution {
public:
    
    bool helper(vector<int> &cookies,int limit,vector<int>&v,int index){
        bool ans=false;
        if(index>=cookies.size())
            return true;
        for(int i=0;i<v.size();i++){
            if(cookies[index]+v[i]<=limit){
                v[i]+=cookies[index];
            ans=ans||helper(cookies,limit,v,index+1);
            v[i]-=cookies[index];
            }
        }
        return ans;
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        sort(cookies.begin(),cookies.end());
        int n=cookies.size();
        int i=*max_element(begin(cookies),end(cookies)),j=accumulate(begin(cookies),end(cookies),0);
        while(i<=j){
            int mid=i+((j-i)/2);
            vector<int> v(k,0);
            if(helper(cookies,mid,v,0)){
                j=mid-1;
            }
            else
                i=mid+1;
        }
        return i;
    }
};