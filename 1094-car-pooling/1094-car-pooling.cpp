class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int people=0;
        int stops[1001]={0};
        for(int i=0;i<trips.size();i++){
            stops[trips[i][1]]+=trips[i][0];
            stops[trips[i][2]]-=trips[i][0];
        }
        for(int i=0;i<1001;i++){
            people+=stops[i];
            if(people>capacity)
                return false;
        }
        return true;
    }
};