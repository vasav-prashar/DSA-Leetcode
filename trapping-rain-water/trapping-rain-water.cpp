class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int leftsum=0,rightsum=0,res=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=leftsum)
                    leftsum=height[l];
                else
                    res+=leftsum-height[l];
                l++;
            }
            else{
                if(height[r]>=rightsum)
                    rightsum=height[r];
                else
                    res+=rightsum-height[r];
                r--;
            }
            
        }
        return res;
    }
};