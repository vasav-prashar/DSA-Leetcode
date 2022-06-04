class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        sol(0,board,ans,n);
        return ans;
    }
    
    bool safe(int row, int col, vector<string> &board , int n){
        int drow=row;
        int dcol=col;
        //upper diagonal
        while(col>=0&&row>=0)
        {
            if(board[row][col]=='Q')
                return false;
            row--;
            col--;
        }
        row=drow;
        col=dcol;
        //backwards col
        while(col>=0){
            if(board[row][col]=='Q')
                return false;
            col--;
        }
        row=drow;
        col=dcol;
        //downwards back if we move col will decrease but row will increase
        while(row<n&&col>=0){
            if(board[row][col]=='Q')
                return false;
            row++;
            col--;
        }
        return true;
        
    }
    
    void sol(int col,vector<string> &board,vector<vector<string>> &ans,int n){
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++){
            if(safe(row,col,board,n)){
                board[row][col]='Q';
                sol(col+1,board,ans,n);
                board[row][col]='.'; //backtrack step
            }
        }
    }
};