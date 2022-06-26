class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int totalSum=0;
        // for(int i=0;i<n;i++){
        //     totalSum+=cardPoints[i];
        // }
        totalSum=accumulate(begin(cardPoints),end(cardPoints),0);
        cout<<totalSum;
        // if(n==k)
        //     return totalSum;
        int winSize=n-k;
    
        int winSum=0;
        
        for(int i=0;i<n-k;i++){
            winSum+=cardPoints[i];
        }
        int minSum=winSum;
        
        for(int i=winSize;i<n;i++){
            winSum-=cardPoints[i-winSize];
            winSum+=cardPoints[i];
            minSum=min(minSum,winSum);
            cout<<" "<<winSum;
        }
        return totalSum-minSum;
    }
};