class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int j=0,i;
        for(i=0;i<n;i++){
            if(s[i]==' '){
                reverse(s.begin()+j,s.begin()+i);
                j=i+1;
            }
        }
        reverse(s.begin()+j,s.begin()+i);
        
        
        return s;
    }
};