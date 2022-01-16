class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int l=-1;
        int distance=0;
        int n=seats.size();
        for(int i=0;i<n;i++){
            if(seats[i]==1){
                if(l==-1){
                    l=i;
                    distance=max(distance,l);
                }
                else{
                    distance=max(distance,(i-l)/2);
                    l=i;
                }
            }
        }
        if(seats[n-1]==0)
            distance=max(distance,n-1-l);
        return distance;
    }
};