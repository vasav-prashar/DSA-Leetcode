class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> ans(26,0);
        for(int i=0;i<t.size();i++){
           ans[t[i]-'a']++; 
        }
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']--;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1)
                return (char)i+'a';
        }
        return 0;
    }
};