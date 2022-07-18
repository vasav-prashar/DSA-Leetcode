class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        map<int,int> m;
        int res=0;
        int r=matrix.size();
        int c=matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=1;j<c;j++){
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        for(int i=0;i<c;i++){
            for(int j=i;j<c;j++){
                m={{0,1}};
                int curr=0;
                for(int k=0;k<r;k++){
                    curr += matrix[k][j] - (i > 0 ? matrix[k][i - 1] : 0);
                    res += m.find(curr - target) != m.end() ? m[curr - target] : 0;
                    m[curr]++;
                }
            }
        }
        return res;
    }
};