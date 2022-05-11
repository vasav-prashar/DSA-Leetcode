class Solution {
public:
    int countVowelStrings(int n) {
        int a=1,e=1,i=1,o=1,u=1;
        while(--n>0){
            o=o+u;
            i=i+o;
            e=e+i;
            a=a+e;
        }
        return a+e+i+o+u;
    }
};