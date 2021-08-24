class Solution {
public:
    string reverseWords(string s) {
        string st = "" , temp ="";
        s+= " ";
        for(auto i :s){
            if(i == ' '){
                reverse(temp.begin(),temp.end());
                st+= temp+" ";
                temp="";
            }else{
                temp += i;
            }
        }
        return st.substr(0,st.length()-1);
        
    }
};