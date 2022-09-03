class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        vector<int> current={1,2,3,4,5,6,7,8,9};
        for(int i=2;i<=n;i++){// i is the ith digit
            vector<int> curr2;
            for(int x:current){
                int y=x%10;
                if(y+k<10){
                    curr2.push_back(x*10+y+k);
                }
                if(k>0&&y-k>=0)
                    curr2.push_back(x*10+(y-k));
                
            }
            current=curr2;
        }
        return current;
    }
};