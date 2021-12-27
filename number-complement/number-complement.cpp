class Solution {
public:
    int findComplement(int num) {
      vector<int> ans;
        while(num!=0){
            ans.push_back(num%2);
            num/=2;
        }
        int a=0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]==1)
                ans[i]=0;
            else if(ans[i]==0)
                ans[i]=1;
        }
        for(int i=ans.size()-1;i>-1;i--)
            a=a*2+ans[i];
        return a;
    }
};