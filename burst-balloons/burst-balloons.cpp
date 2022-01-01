class Solution {
public:
    int maxCoins(vector<int>& nums) {
        const int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        
        for (int len = 1; len <= n; ++len) {
            for (int i = 0; i + len <= n; ++i) {
                const int j = i + len - 1;
                const int left = i == 0 ? 1 : nums[i - 1];
                const int right = j == n - 1 ? 1 : nums[j + 1];

                for (int k = i; k <= j; ++k) {
                    const int cur = left * nums[k] * right
                        + (k != i ? dp[i][k - 1] : 0)
                        + (k != j ? dp[k + 1][j] : 0);
                    dp[i][j] = max(dp[i][j], cur);
                }
            }
        }

        return dp[0][n-1];
    }
};