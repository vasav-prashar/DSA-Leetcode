// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  int helper(int A[],int index,int N){
      if(index==N-1)
        return 1;
    int reach=index+A[index];
    for(int i=index+1;i<=reach;i++){
        if(helper(A,i,N))
        return 1;
    }
    return false;
  }
    int canReach(int A[], int N) {
        // code here
        return helper(A,0,N);
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends