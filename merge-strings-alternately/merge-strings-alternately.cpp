class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size(),m=word2.size();
        int size=max(n,m);
        string ans="";
        int i1=0,i2=0;
        while(i1<n||i2<m){
            if(i1<n){
                ans.push_back(word1[i1]);
                i1++;
            }
            if(i2<m){
                ans.push_back(word2[i2]);
                i2++;
            }
            // ans+=word1[i1];
            // ans+=word2[i2];
            // i1++;
            // i2++;
        }
        return ans;
    }
};