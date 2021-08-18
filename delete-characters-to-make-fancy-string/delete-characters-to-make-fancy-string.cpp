class Solution {
public:
    string makeFancyString(string s) {
        string result="";
        for(int i=0;i<s.size();i++)
            if(s[i]!=s[i+1] or s[i]!=s[i+2])  result.push_back(s[i]);
        return result;
    }
};