class Solution {
public:
    bool isSubsequence(string s, string t) {
        auto it = s.begin();
        auto it2 = t.begin();
        while(it!= s.end() && it2!= t.end()){
            if(*it == *it2){
                ++it;
            }
            ++it2;
        }
        if(it == s.end())return true;
        return false;
    }
};