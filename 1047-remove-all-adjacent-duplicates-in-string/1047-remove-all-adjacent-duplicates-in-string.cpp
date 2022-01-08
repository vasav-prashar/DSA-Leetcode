class Solution {
public:
    string removeDuplicates(string s) {
      int i=0,j=0;
        while(j<s.size()&&i<s.size()){
            s[i]=s[j];
            if(i>0&&s[i]==s[i-1])
                i-=2;
            i++;
            j++;
        }
        return s.substr(0,i);
    }
};