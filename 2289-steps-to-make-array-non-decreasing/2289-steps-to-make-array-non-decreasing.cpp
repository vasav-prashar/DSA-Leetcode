class Solution {
public:
    // use stack of pair with element and steps to remove and we traverse the array form right to left
    //https://leetcode.com/problems/steps-to-make-array-non-decreasing/discuss/2290383/Detailed-and-Intuitive-explanation
    int totalSteps(vector<int>& nums) {
        stack<pair<int,int>> st;
        int n=nums.size();
        int steps=0;
        int currSteps=0;
        for(int i=n-1;i>=0;i--){
            int currSteps=0;
           
            while(!st.empty()&&nums[i]>st.top().first){
                // currSteps++;
                currSteps=max(currSteps+1,st.top().second);
                st.pop();
                
            }
            st.push({nums[i],currSteps});
            steps=max(steps,currSteps);
        }
        return steps;
    }
};