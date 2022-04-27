class Solution {
public:
    int find(vector<int> &subsets,int x){
        if(subsets[x]==-1)
            return x;
        return subsets[x]=find(subsets,subsets[x]);
        
    }
    
    void unionset(vector<int> &subsets,int x,int y){
        int px=find(subsets,x);
        int py=find(subsets,y);
        if(px!=py){
            subsets[py]=px;
        }
    }
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        vector<int> subsets(s.size(),-1);
        
            for (int i = 0; i < pairs.size(); ++i) {
            int x = find(subsets, pairs[i][0]), y = find(subsets, pairs[i][1]);            
            if (x != y) unionset(subsets, x, y);
        }
         unordered_map<int, vector<int>> m;
        for (int i = 0; i < s.size(); i++)
            m[find(subsets, i)].push_back(i);
        for (auto x : m) {
            string str = ""; int j = 0;
            for (auto i : x.second) { str += s[i]; }
            sort(str.begin(), str.end());
            for (auto i : x.second) { s[i] = str[j++]; }
        }
        
        return s;
    }
};