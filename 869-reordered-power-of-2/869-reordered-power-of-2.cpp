class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        for(int i=0;i<30;i++){
            string temp=to_string(1<<i);//left shift 1 bit means pow(2,i)
            sort(temp.begin(),temp.end());
            if(s==temp)
                return true;
            
        }
        return false;
    }
};