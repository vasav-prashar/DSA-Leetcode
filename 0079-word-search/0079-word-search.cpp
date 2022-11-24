class Solution {
public:
    bool search(int i,int j,int n,int m,vector<vector<char>>& board,string &word,int curr){
        if(curr == word.size()) return true; 
        if(i<0||j<0||i>=n||j>=m||board[i][j]!=word[curr])
            return false;
        if(!word.size())
            return false;
          board[i][j] = '0';
        bool dir1=search(i+1,j,n,m,board,word,curr+1);
         bool dir2=search(i,j+1,n,m,board,word,curr+1);
         bool dir3=search(i-1,j,n,m,board,word,curr+1);
         bool dir4=search(i,j-1,n,m,board,word,curr+1);
        board[i][j] = word[curr];
        return dir1||dir2||dir3||dir4;
        
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(search(i,j,n,m,board,word,0)&&board[i][j]==word[0]){
                    return true;
                }
            }
        }
        return false;
    }
};