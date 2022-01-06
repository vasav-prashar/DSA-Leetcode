class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int min_price=INT_MAX;
        for(int i=0;i<n;i++){
            min_price=min(min_price,prices[i]);
            profit=max(profit,prices[i]-min_price);
           
        }
    return profit;
    }
};