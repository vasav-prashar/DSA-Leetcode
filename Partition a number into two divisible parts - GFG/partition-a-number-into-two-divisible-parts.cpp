// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string stringPartition(string S, int a, int b){
        // code here 
        int n=S.size();
        string ans="";
        bool flag=false;
        for(int i=1;i<n;i++){
            string one=S.substr(0,i);
            string two=S.substr(i);
            int val1=stoi(one),val2=stoi(two);
            if(val1%a==0&&val2%b==0){
            flag=true;
            // ans=ans+one;
            ans=one+" "+two;
            break;
            }
        }
        if(flag)
        return ans;
        return "-1";
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {   
        int a,b;
        string S;
        cin >> S >> a >> b;
        Solution ob;
        cout << ob.stringPartition(S,a,b) << endl;
    }
    return 0; 
}   // } Driver Code Ends