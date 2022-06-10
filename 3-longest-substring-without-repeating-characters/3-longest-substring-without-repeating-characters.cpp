class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int> m;
        int n=s.size();
        int ans=0;
        int i=0,j=0;
        while(j<n){
            
             m[s[j]]++;
            
            while(m[s[j]]!=1){
                m[s[i]]--;
                i++;
            }
           
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
        
    }
};