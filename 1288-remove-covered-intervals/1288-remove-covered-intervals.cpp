class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int left=-1,right=-1,ans=0;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
                if(intervals[i][0]>left&&intervals[i][1]>right){
                    left=intervals[i][0];
                    ans++;
                }
            right=max(right,intervals[i][1]);
        }
        return ans;
    }
};