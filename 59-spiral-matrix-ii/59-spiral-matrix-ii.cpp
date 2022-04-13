class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int rowe=n-1,cole=n-1;
        int rows=0,cols=0;
        vector<vector<int>> ans(n,vector<int>(n));
        int val=1;
        while(rows<=rowe&&cols<=cole){
                
                for(int k=cols;k<=cole;k++)
                    ans[rows][k]=val++;
                rows++;
                for(int k=rows;k<=rowe;k++)
                    ans[k][cole]=val++;
                cole--;
                for(int k=cole;k>=cols;k--)
                    ans[rowe][k]=val++;
                rowe--;
                for(int k=rowe;k>=rows;k--)
                    ans[k][cols]=val++;
                cols++;
            }
        
        return ans;
    }
};