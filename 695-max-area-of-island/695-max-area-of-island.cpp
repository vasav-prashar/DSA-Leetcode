class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                // if(grid[i][j]==1)
                maxarea=max(maxarea,area(i,j,grid));
            }
        }
        return maxarea;
    }
    int area(int i,int j,vector<vector<int>>& grid){
        if(i<0||i>=grid.size()||j<0||j>=grid[0].size()||grid[i][j]==0){
            return 0;
        }
        else{
            grid[i][j]=0;
            return (1+area(i+1,j,grid)+area(i-1,j,grid)+area(i,j+1,grid)+area(i,j-1,grid));
        }
    }
};