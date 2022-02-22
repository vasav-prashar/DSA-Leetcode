class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int multiple_letters=columnTitle[i]-'A'+1;
            ans=(ans*26)+multiple_letters;
        }
        return ans;
    }
};