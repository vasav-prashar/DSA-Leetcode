class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans(0,accounts.size());
        int x,y=0;
        for (int i=0;i<accounts.size();i++){
            x=0;
            for(int j=0;j<accounts[i].size();j++){
                x+=accounts[i][j];
            }
            y=max(y,x);
        }
        return y;
    }
};