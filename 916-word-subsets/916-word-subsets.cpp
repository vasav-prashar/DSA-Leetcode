class Solution {
public:
    int countChar(string s,char c){
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==c)
                count++;
        }
        return count;
    }
    bool isSubset(string s,vector<int>& freq){
        for(char i='a';i<='z';i++){
            if(countChar(s,i)<freq[i-'a']){
                return false;
            }
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> freq(26,0);
        for(int i=0;i<words2.size();i++){
            for(char j='a';j<='z';j++){
                freq[j-'a']=max(freq[j-'a'],countChar(words2[i],j));
            }
        }
        for(int i=0;i<words1.size();i++){
            if(isSubset(words1[i],freq))
                ans.push_back(words1[i]);
        }
        return ans;
    }
};