class Solution {
public:
    // using binary search
    int countLessThanMid(vector<vector<int>> &matrix,int mid){
        int count=0;
        int i=0,j=matrix.size()-1;//first col and last col
        for(int i=0;i<matrix.size();i++){
            while(j>=0&&matrix[i][j]>mid)// if elemmnt is greater than mid then we neglect the col
                j--;
            count+=j+1;
            
        }
        return count;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int l=matrix[0][0];
        int h=matrix[matrix.size()-1][matrix.size()-1];
        while(l<=h){
            int mid=l+(h-l)/2;
            if(countLessThanMid(matrix,mid)<k)// check the lesser or equal to k elements count
               l=mid+1;
               else
               h=mid-1;
            
        }
        return l;
    }
};