class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        // if(h==n)
        //     return n;
        // int ans=0;
        int low=1,maximum=*max_element(piles.begin(),piles.end());
        while(low<maximum){
            int mid=(low+maximum)/2;
            int ans=0;
            for(int i=0;i<n;i++)
                ans+=(piles[i]+mid-1)/mid;
            if(ans>h)
                low=mid+1;
            else
                maximum=mid;
        }
        return low;
    }
};