class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumgas=0,sumcost=0;
        int a_pointer=0;
        int diff=0;
        
        for(int i=0;i<gas.size();i++)
            sumgas+=gas[i];
        for(int i=0;i<cost.size();i++)
            sumcost+=cost[i];
        if(sumgas<sumcost)
            return -1;
        
        for(int i=0;i<gas.size();i++){
            diff+=(gas[i]-cost[i]);
            if(diff<0){
                a_pointer=i+1;
                diff=0;
            }
        }
        return a_pointer;
    }
};