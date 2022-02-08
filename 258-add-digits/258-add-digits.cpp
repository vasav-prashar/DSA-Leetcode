class Solution {
public:
    int addDigits(int num) {
        int sum=0;
        int n;
        while(num>0){
            n=num%10;
            sum+=n;
            num/=10;
            
            if(num==0&&sum>9){
              num=sum;
              sum=0;
          }
        }
          
        return sum;
    }
};