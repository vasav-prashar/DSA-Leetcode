class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n=changed.size();
        if(n%2==1)
            return ans;
        map<int,int> m;
        for(int i=0;i<n;i++)
            m[changed[i]]++;
        sort(changed.begin(),changed.end());
        for(int i=0;i<n;i++){
            if(m[changed[i]]==0)
                continue;
            if(m[changed[i]*2]==0)
                return{};
            if(m[changed[i]]&&m[changed[i]*2])
            {
                m[changed[i]*2]--;
                ans.push_back(changed[i]);
                m[changed[i]]--;
            }
        }
        return ans;
        
    }
};