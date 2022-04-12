class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m=board.size();
        int n=board[0].size();
        int dx[8]={-1,-1,0,1,1,1,0,-1};
        int dy[8]={0,1,1,1,0,-1,-1,-1};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count=0;
                for(int k=0;k<8;k++){
                    int newm=i+dx[k];
                    int newn=j+dy[k];
                    if(newm>=0&&newm<m&&newn>=0&&newn<n&&(board[newm][newn]==1||board[newm][newn]==2))
                        count++;
                }
                    if(board[i][j]==0&&count==3){
                        board[i][j]=3;
                    }
                    else if(board[i][j]==1&&(count<2||count>3))
                        board[i][j]=2;
                }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==3)
                    board[i][j]=1;
                else if(board[i][j]==2)
                    board[i][j]=0;
            }
        }
    }
};