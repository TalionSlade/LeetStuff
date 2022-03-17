class Solution {
public:
    int scoreOfParentheses(string s) {
          int n=s.size();
        int count=0,score=0;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                count++;
            }
            else{
                count--;
            }
            if(s[i]==')' && s[i-1]=='('){
                score+=pow(2,count);
            }
        }
        return score;
    }
};