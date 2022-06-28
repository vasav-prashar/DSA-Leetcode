class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        int count=0;
        for(int i=0;i<n;i++){
            if(!st.empty()&&st.top()==nums[i]&&st.size()%2==1)
                count++;
            else
            {
                st.push(nums[i]);
            }
        }
       if(st.size()%2==1)
           count++;
        return count;
    }
};