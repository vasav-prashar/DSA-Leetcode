class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n=ops.size();
        int size=0;
        vector<int> a(size);
        for(int i=0;i<ops.size();i++){
            
            if(ops[i]=="+"){
                a.push_back(a[size-1]+a[size-2]);
                size++;
            }
            else if(ops[i]=="C"){
                a.pop_back();
                size--;
            }
            else if(ops[i]=="D"){
                a.push_back(a[size-1]*2);
                size++;
            }
            else{
                size++;
               a.push_back(stoi(ops[i])); 
            }
        }
        return accumulate(a.begin(),a.end(),0);
    }
};