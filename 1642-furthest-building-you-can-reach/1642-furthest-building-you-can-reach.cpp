class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int brickSum=0, i;
        for(i=1;i<heights.size();i++){
            int x=heights[i]-heights[i-1];
            if(x<0) continue;
            pq.push(x);
            bricks-=x;
            if(bricks<0 && ladders>0){
                int maxHeight=pq.top();
                pq.pop();
                ladders--;
                bricks+=maxHeight;
            }
            if(bricks<0) break;
        }
        return i-1;
    
    }
};