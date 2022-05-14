class Solution {
public:
    vector<pair<int,int>> ls[101];
    void bfs(vector<int> &signalres,int k){
        queue<int> q;
        q.push(k);
        signalres[k]=0;
        while(!q.empty()){
            int currNode=q.front();
            q.pop();
            
            for(pair<int,int> edge:ls[currNode]){
                int time=edge.first;
                int neighbNode=edge.second;
                
                int arvTime=signalres[currNode]+time;
                if(signalres[neighbNode]>arvTime){
                    
                    signalres[neighbNode]=arvTime;
                    q.push(neighbNode);
                }
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        for(vector<int> time:times){
            int source=time[0];
            int dist=time[1];
            int timetrav=time[2];
            ls[source].push_back({timetrav,dist});
        }
        vector<int> signalres(n+1,INT_MAX);
        bfs(signalres,k);
        int ans=INT_MIN;
        for(int i=1;i<=n;i++){
            ans=max(ans,signalres[i]);
            }
        return ans==INT_MAX?-1:ans;
    }
};