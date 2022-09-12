class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int a=0,b=tokens.size()-1;
        while(a<=b){
            if(power>=tokens[a])
            {
                power=power-tokens[a];
                score++;
                a++;
            }
            else
            {
                if(power+tokens[b]>=tokens[a]&&score!=0&&a!=b){
                    power=power+tokens[b];
                    score--;
                    b--;
                }
                else
                    break;
               
                
            }
        }
        return score;
    }
};