class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans=0;
        int n=words.size();
        vector<bitset<26>> map(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++)
                map[i][words[i][j]-'a']=1;
            for(int k=0;k<i;k++){
                if(!common(map[i],map[k]))
                  ans=max(ans,int(words[i].size()*words[k].size()));
            }
        }
        return ans;
    }
    bool common(bitset<26> &a,bitset<26> &b){
        for(int i=0;i<26;i++)
            if(a[i]&b[i]==1)
                return true;
        return false;
    }
};