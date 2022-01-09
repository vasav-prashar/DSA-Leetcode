class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        const int ROW_NUM = grid.size(), COL_NUM = grid[0].size();
        const int D[] = {-1, 0, 1};
        int dp[ROW_NUM][COL_NUM][COL_NUM];
        
        for (int k = 0; k < ROW_NUM; k ++) 
            for (int i = 0; i < COL_NUM; i ++)  
                for (int j = 0; j < COL_NUM; j ++) 
                    dp[k][i][j] = 0;
        
        for (int i = 0; i < COL_NUM; i ++) // ulfill dp of the last row
            for (int j = i; j < COL_NUM; j ++) {
                if (i == j)
                    dp[ROW_NUM - 1][i][j] = grid[ROW_NUM - 1][i];
                else
                    dp[ROW_NUM - 1][i][j] = grid[ROW_NUM - 1][i] + grid[ROW_NUM - 1][j];
            }
        
        for (int k = ROW_NUM - 2; k >= 0; k --) { // from the second last row to the first row
            vector<int> row = grid[k];
            for (int i = 0; i < COL_NUM; i ++)
                // for every (i, j, k), dp[k][i][j] == dp[k][j][i]
                // so we only need to find the answer for j >= i
                // for (int j = 0; j < COL_NUM; j ++) { // we will get DP in the picture
                for (int j = i; j < COL_NUM; j ++) // we will get DP' in the picture
                    for (int di = 0; di < 3; di ++)
                        for (int dj = 0; dj < 3; dj ++) {
                            if (i + D[di] < 0 || i + D[di] >= COL_NUM || j + D[dj] < 0 || j + D[dj] >= COL_NUM) continue;
                            if (i == j) 
                                dp[k][i][j] = max(dp[k][i][j], dp[k + 1][i + D[di]][j + D[dj]] + row[i]);
                            else
                                dp[k][i][j] = max(dp[k][i][j], dp[k + 1][i + D[di]][j + D[dj]] + row[i] + row[j]);
                        }
        }
        return dp[0][0][COL_NUM - 1];
    }
};