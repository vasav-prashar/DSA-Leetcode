class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        int ele=0;
        ans.push_back(first);
        for(int i=0;i<encoded.size();i++){
            
            ans.push_back(first^=encoded[i]);
        }
        return ans;
    }
};