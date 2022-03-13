class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string pref = "";
        if(s.size() == 1) return s[0];
        //initial prefix
        for(int i = 0 ; i < min(s[0].size(),s[1].size()) ; i++){
            if(s[0][i]==s[1][i]){
                pref.push_back(s[0][i]);
            }else{
                break;
            }
        }
        for(int i = 2 ; i < s.size() ; i++){
            if(pref.size()==0)return pref;
            string temp_pref ="";
            
            for(int j = 0 ; j < min(pref.size(),s[i].size()); j++){
                if(pref[j]==s[i][j]){
                    temp_pref.push_back(pref[j]);
                }else{
                    break;
                }
            }            
            pref = temp_pref;
        }
        
        return pref;
        
    }
};