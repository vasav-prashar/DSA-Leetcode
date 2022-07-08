class Solution {
public:
    int minimumNumbers(int num, int k) {
        if(num==0)
            return 0;
        int ans=-1;
        for(int i=1;i<=10;i++){
            if((i*k)%10==num%10){
                ans=i;
                break;
            }
        }
        if(ans*k<=num)
            return ans;
        else
            return -1;
    }
};