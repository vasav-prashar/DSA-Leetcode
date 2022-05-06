class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s.size()&&ans.back()==s[i])
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        return ans;
        
        
        
        // two pointer
        // int i=0,j=0;
      //   while(j<s.size()&&i<s.size()){
      //       s[i]=s[j];
      //       if(i>0&&s[i]==s[i-1])
      //           i-=2;
      //       i++;
      //       j++;
      //   }
      //   return s.substr(0,i);
    }
};