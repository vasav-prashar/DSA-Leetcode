class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        map<int,string> m={{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},{6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
        if(digits.size()==0)
            return ans;
        
        ans.push_back("");
        for(int i=0;i<digits.size();i++){
            vector<string> temp;
            string num=m[digits[i]-'0'];
            for(int j=0;j<ans.size();j++){
                for(int k=0;k<num.size();k++){
                    temp.push_back(ans[j]+num[k]);
                }
            }
            ans=temp;
        }
        return ans;
    }
};