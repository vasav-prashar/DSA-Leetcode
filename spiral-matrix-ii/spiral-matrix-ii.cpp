class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
       int rowb=0, rowe=n-1;
        int colb=0, cole=n-1;
        int val=1;
        
        while(rowb<=rowe&&colb<=cole){
            for(int i=colb;i<=cole;i++){
                ans[rowb][i]=val++;
            }
            rowb++;
            for(int i=rowb;i<=rowe;i++){
                ans[i][cole]=val++;
            }
            cole--;
            for(int i=cole;i>=colb;i--){
                ans[rowe][i]=val++;
            }
            rowe--;
            for(int i=rowe;i>=rowb;i--){
                ans[i][colb]=val++;
            }
            colb++;
        }
        return ans;
    }
};