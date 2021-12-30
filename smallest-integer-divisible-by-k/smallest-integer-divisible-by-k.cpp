class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0||k%5==0)return -1;
        int prev_ans=0;
        for(int n=1;n<=k;n++){
            prev_ans=(prev_ans*10+1)%k;
            if(prev_ans==0){
                return n;
            }
        }
        return -1;
    }
};