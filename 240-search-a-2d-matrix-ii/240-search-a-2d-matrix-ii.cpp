class Solution {
public:
    // we traverse the matrix
    // any element right to matrix[i][j] will be greater than it.
    // any element to the top of matrix[i][j] will be less than it.
    // o we start searching from BOTTOM_LEFT:

// if element found -> return TRUE
// if matrix[i][j] > target -> move UP.
// if matrix[i][j] < target -> move RIGHT.
//     O(n+m) <-TC
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int i=m-1;
        int j=0;
        while(i>=0&&j<n){
            if(matrix[i][j]==target){
                return true;
            }
            else if(target<matrix[i][j])
                i--;
            else
                j++;
        }
        return false;
    }
};