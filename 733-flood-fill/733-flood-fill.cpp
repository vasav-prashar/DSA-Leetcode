class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color=image[sr][sc];
        if(color!=newColor)
            fill(image,sr,sc,color,newColor);
        return image;
    }
    void fill(vector<vector<int>>& image, int i, int j,int color ,int newColor){
        if(i<0||i>=image.size()||j<0||j>=image[0].size()||image[i][j]!=color)
            return;
        image[i][j]=newColor;
        fill(image,i+1,j,color,newColor);
        fill(image,i-1,j,color,newColor);
        fill(image,i,j+1,color,newColor);
        fill(image,i,j-1,color,newColor);
    }
};