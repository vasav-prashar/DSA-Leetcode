class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int n=heights.size();
        int i=0;
        for(int i=0;i<n-1;i++){
            int d=heights[i+1]-heights[i];
            if(d<=0)
                continue;
            if(d>0){
                pq.push(d);
                bricks=bricks-d;
                
                if(bricks<0){
                    ladders--;
                    bricks=bricks+pq.top();
                    pq.pop();
                    
                    if(bricks<0||ladders<0)
                        return i;
                }
                
            }
            
            
        }
        return n-1;
    }
};