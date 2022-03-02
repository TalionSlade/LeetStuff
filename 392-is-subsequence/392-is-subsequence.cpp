class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="") return true; 
        int si = 0 ,ti = 0;
        for(;ti <=t.size() ; ti++){
            if(s[si] == t[ti])si++;
            if(si == s.size())return true;
        }        
        return(si==s.size());       
    }
};