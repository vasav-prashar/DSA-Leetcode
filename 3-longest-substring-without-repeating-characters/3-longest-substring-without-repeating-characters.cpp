class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        set<int> st;
        int i=0,j=0;
        int sum=0;
        while(j<n){
            if(!st.count(s[j])){
               st.insert(s[j]);
                sum=max(sum,(int)st.size()); j++;
            }
              else
            {
                st.erase(s[i]);
                i++;
            }
            
           
        }
        return sum;
        
    }
};