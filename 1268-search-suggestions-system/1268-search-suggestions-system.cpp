class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        vector<vector<string>> result;
        int start,bs=0,n=products.size();
        string prefix;
        for(int i=0;i<searchWord.size();i++){
            prefix+=searchWord[i];
            start=lower_bound(products.begin()+bs,products.end(),prefix)-products.begin();
            result.push_back({});
            for(int j=start;j<min(start+3,n)&&!products[j].compare(0,prefix.length(),prefix);j++)
                result.back().push_back(products[j]);
            bs=start;
        }
        return result;
    }
};