class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        vector<int> f(26,0);
        for(int i=0;i<n;i++)
            f[s[i]-'a']++;
        // sort(f.begin(),f.end());
        set<int> st;
        int count=0;
        for(int i=0;i<26;i++){
            int curr=f[i];
            while(curr>0){
                if(st.find(curr)!=st.end()){
                    count++;
                    curr--;
                }
                else
                    break;
            }
            if(curr>0)
                st.insert(curr);
           
        }
        return count;
    }
};