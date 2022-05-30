class Solution {
public:
    int divide(int a, int b) {
       if(a==b)
           return 1;
    bool ispos=(a<0==b<0);
       unsigned int x=abs(a),y=abs(b);
       unsigned int ans=0;
        while(x>=y){
            int q=0;
            while(x>(y<<(q+1))){
                q++;
            }
            ans+=(1<<q);
            x-=(y<<q);
            
        }
        if(ans==INT_MIN&&ispos)
            return INT_MAX;
        return ispos?ans:-ans;
            
    }
};