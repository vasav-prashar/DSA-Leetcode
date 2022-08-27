class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        int prefix[n][m];// make a prefix sum array
        prefix[0][0]=matrix[0][0];
        for(int i=1;i<m;i++){// adding first row
            prefix[0][i]=prefix[0][i-1]+matrix[0][i];
        }
        
        for(int i=1;i<n;i++){// adding first col
            prefix[i][0]=prefix[i-1][0]+matrix[i][0];
        }
        
        //creating whole prefixsum array
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+matrix[i][j];
            }
        }
        int left=0,top=0,corner=0,sum=0,maxi=INT_MIN;
        for(int lowrow=0;lowrow<n;lowrow++){
            for(int lowcol=0;lowcol<m;lowcol++){
                for(int highrow=lowrow;highrow<n;highrow++){
                    for(int highcol=lowcol;highcol<m;highcol++){
                        left=lowcol>0?prefix[highrow][lowcol-1]:0;
                        top=lowrow>0?prefix[lowrow-1][highcol]:0;
                        corner=lowrow>0&&lowcol>0?prefix[lowrow-1][lowcol-1]:0;
                        sum=prefix[highrow][highcol]-left-top+corner;
                        if(sum<=k&&sum>maxi)
                            maxi=sum;
                    }
                }
            }
        }
        return maxi;
    }
};