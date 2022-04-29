class Solution {
public:
    bool dfs(vector<vector<int>> &graph,vector<int>&colored,int node){
        for(auto i:graph[node]){
           
            if(colored[i]==-1){
                colored[i]=1-colored[node];
            
            if(!dfs(graph,colored,i))
                return false;
            }
             if(colored[i]==colored[node])
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> colored(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(colored[i]==-1){
                colored[i]=1;
            
            if(dfs(graph,colored,i)==false)
                return false;
        }
        }
        return true;
    }
};