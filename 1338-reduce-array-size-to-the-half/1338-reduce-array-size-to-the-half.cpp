class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        vector<int> freq;
        for(auto [ele,fr]:m){
            freq.push_back(fr);
        }
        sort(freq.begin(),freq.end());
        int ans=0,remove=0,half=n/2,i=freq.size()-1;

        while(remove<half){
            ans++;
            remove+=freq[i--];
           
        }
        return ans;
    }
};