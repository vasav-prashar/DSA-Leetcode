class Solution {
public:
    bool match(string &a,string &b){
        map<char,char> m1,m2;
        for(int i=0;i<a.size();i++){
            if(m1.find(a[i])==m1.end()){
                m1[a[i]]=b[i];
            }
            if(m2.find(b[i])==m2.end())
                m2[b[i]]=a[i];
            if(m1[a[i]]!=b[i]||m2[b[i]]!=a[i])
                return false;
        }
        
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            if(match(words[i],pattern))
                ans.push_back(words[i]);
        }
        return ans;
    }
};