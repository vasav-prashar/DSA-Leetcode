class Solution {
public:
    bool judgeCircle(string s) {
        int n=s.size();
        int countx=0,county=0;
        for(int i=0;i<n;i++){
            if(s[i]=='L')
                countx++;
            if(s[i]=='R')
               countx--;
             if(s[i]=='U')
               county++;
             if(s[i]=='D')
               county--;
            
        }
        
       if(countx==0&&county==0)
           return true;
        return false;
    }
};