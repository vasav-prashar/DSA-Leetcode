class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> m(26,0);
        int count=s1.size();
        for(int i=0;i<s1.size();i++){
            m[s1[i]-'a']++;
        }
        int i=0,j=0;
        while(j<s2.size()){
            if(m[s2[j++]-'a']-->0)
            {
                count--;
            }
            if(count==0)
                return true;
            if(j-i==s1.size()&& m[s2[i++]-'a']++>=0){
                
              
                count++;
            }
        }
        return false;
    }
};