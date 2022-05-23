class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {        
	vector<vector<int> > dp(m + 1, vector<int>(n + 1));
	for(auto& str : strs) {		
		int zeros = count(begin(str), end(str), '0'), ones = size(str) - zeros; 
		vector<vector<int> > dp2 = dp;
		for(int i = 0; i <= m; i++)
			for(int j = 0; j <= n; j++)                    
				if(i - zeros >= 0 && j - ones >= 0) // use this check or directly start from i=zeros & j=ones
					dp2[i][j] = max(dp[i][j], dp[i - zeros][j - ones] + 1); // ensures we don't count a string multiple times
		dp = dp2;
	}
	return dp[m][n];
}
};