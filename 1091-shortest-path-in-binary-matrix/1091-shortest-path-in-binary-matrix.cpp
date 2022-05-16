class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1||grid[grid.size()-1][grid[0].size()-1])
            return -1;
        
        vector<vector<int>> dir={{-1,-1}, {-1, 0}, {-1, 1}, {0, -1},{0, 1}, {1, -1}, {1, 0}, {1, 1}};
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]==0&&m==1&&n==1) return 1;
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<vector<int>> q;
        int dist;
        q.push({0,0,1});
        vis[0][0]=1;
        while(!q.empty()){
            vector<int> f=q.front();
            int x=f[0],y=f[1],dist=f[2];
            cout<<f[0]<<f[1]<<f[2]<<endl;
            q.pop();
            if(f[0]==n-1&&f[1]==m-1)
                return f[2];
            
            for(vector<int> move:dir){
                int newx=f[0]+move[0];
                int newy=f[1]+move[1];
                
                if(newx>=0&&newx<n&&newy>=0&&newy<m&&grid[newx][newy]==0&&vis[newx][newy]==0){
                    q.push({newx,newy,f[2]+1});
                    vis[newx][newy]=1;
                    
                }
                
            } 
        }
        return -1;
    }
};