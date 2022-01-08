class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int h=(matrix.size()*matrix[0].size())-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]==target)
                return true;
             if(matrix[mid/matrix[0].size()][mid%matrix[0].size()]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return false;
        
        
        
        
        
        
        
        // int row=matrix.size();
        // int col=matrix[0].size();
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         if(matrix[i][j]==target)
        //             return true;
        //     }
        // }
        // return false;
    }
};