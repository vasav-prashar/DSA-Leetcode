class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> val;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                val.push_back(matrix[i][j]);
            }
        }
        sort(val.begin(),val.end());
        return val[k-1];
    }
};