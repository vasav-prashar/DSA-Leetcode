class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int area=0;
        int leftarea=0,rightarea=0;
        while(l<=r){
            if(height[l]<=height[r]){
                area=max(area,height[l]*(r-l));
                    l++;
            }
            else{
                area=max(area,height[r]*(r-l));
                r--;
            }
                
        }
        return area;
    }
};