class Solution {
public:
    // we use dfs and after visiting the cell mark it as 0 so ourhelper function will not take the value one more time
    int helper(vector<vector<int>> &grid,int i,int j){
        if(i>=0&&i<grid.size()&&j>=0&&j<grid[0].size()&&grid[i][j]==1){
            grid[i][j]=0;
            return 1+helper(grid,i+1,j)+helper(grid,i-1,j)+helper(grid,i,j+1)+helper(grid,i,j-1);
        }
        else return 0;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ar=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                ar=max(ar,helper(grid,i,j));
            }
        }
        return ar;
    }
};