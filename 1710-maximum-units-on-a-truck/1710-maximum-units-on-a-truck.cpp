class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        int units=0;
        for(int i=boxTypes.size()-1;i>=0;i--){
            if(boxTypes[i][0]<=truckSize){
                units+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
                // continue;
            }
            else
            {
               
                units+=(truckSize*boxTypes[i][1]);
                truckSize=0;
            }
        }
        return units;
    }
};