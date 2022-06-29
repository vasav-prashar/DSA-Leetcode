class Solution {
public:
   bool static comp(vector<int> &a,vector<int> &b){ //sort acc to the last day
        if(a[0] == b[0])
            return a[1] < b[1];
        
        return a[0] > b[0];
   }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> ans;
        int n=people.size();
        sort(people.begin(),people.end(),comp);
        for(int i=0;i<n;i++){
            int index=people[i][1];
            ans.insert(ans.begin()+index,people[i]);
        }
        return ans;
    }
};