class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long maxlen=verticalCuts[0],maxbre=horizontalCuts[0];
        for(int i=1;i<verticalCuts.size();i++){
            maxlen=max(maxlen,(long)verticalCuts[i]-verticalCuts[i-1]);
        }
        for(int i=1;i<horizontalCuts.size();i++){
            maxbre=max(maxbre,(long)horizontalCuts[i]-horizontalCuts[i-1]);
        }
        maxlen=max(maxlen,(long)w-verticalCuts[verticalCuts.size()-1]);
        maxbre=max(maxbre,(long)h-horizontalCuts[horizontalCuts.size()-1]);
        return maxlen*maxbre%1000000007;
        
    }
};