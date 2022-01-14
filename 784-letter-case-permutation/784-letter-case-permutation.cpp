class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string input=s;
        string output="";
        solve(input,output,ans);
        return ans;
    }
    void solve(string input,string output,vector<string>&  ans){
        if(input.size()==0){
            ans.push_back(output);
            return;
        }
        if(isalpha(input[0])){
            string output1=output;
            string output2=output;
            output1.push_back(tolower(input[0]));
            output2.push_back(toupper(input[0]));
            input.erase(input.begin()+0);
            solve(input,output1,ans);
            solve(input,output2,ans);
            }
        else{
            string output1=output;
            output1.push_back(input[0]);
            input.erase(input.begin()+0);
            solve(input,output1,ans);
        }
    }
};