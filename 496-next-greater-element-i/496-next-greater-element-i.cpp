class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
        stack<int> s;
        map<int,int> m;
        for(int i=0;i<nums2.size();i++){
            int ele=nums2[i];
            
            while(!s.empty()&&ele>s.top()){
                m[s.top()]=ele;
                s.pop();
            }
            s.push(ele);
        }
        for(int i=0;i<nums1.size();i++){
            int ele=nums1[i];
            if(m.find(ele)!=m.end()){
                int nge=m[ele];
                ans[i]=nge;
            }
        }
        return ans;
       
    }
};