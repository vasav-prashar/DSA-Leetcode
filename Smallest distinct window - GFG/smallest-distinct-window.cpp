// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        int n=str.size();
        set<char> s;
        map<char,int> m;
        for(int i=0;i<n;i++){
            // m[s[i]]++;
            s.insert(str[i]);
        }
        int alpha=s.size();
        int i=0,j=0,count=0,ans=INT_MAX;
        while(i<=j&&j<n){
            m[str[j]]++;
            j++;
            while(m.size()==alpha){
                count=j-i;
                ans=min(ans,count);
                m[str[i]]--;
                if(m[str[i]]==0){
                    m.erase(str[i]);
                }
                i++;
            }
        }
    return ans;
        
        // Your code goes here   
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends