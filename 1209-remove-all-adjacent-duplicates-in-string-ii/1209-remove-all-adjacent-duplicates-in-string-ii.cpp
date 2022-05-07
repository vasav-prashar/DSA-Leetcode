class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(st.empty()||st.top().first!=s[i]){
                st.push({s[i],1});
            }
            else{
                pair<char,int> temp=st.top();
                st.pop();
                st.push({s[i],temp.second+1});
            }
            if(st.top().second==k)
                st.pop();
        }
            string ans="";
            while(!st.empty()){
                pair<char,int> t=st.top();
                st.pop();
                while(t.second-->0)
                ans.push_back(t.first);
            }
        reverse(ans.begin(),ans.end());
            return ans;
        
    }
};