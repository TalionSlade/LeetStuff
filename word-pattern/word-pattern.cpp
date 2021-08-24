class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> temp; string t; 
        for(char c: s)
        {
            if(c==' ')
            {
                temp.push_back(t);
                t="";
            }
            else
            {
                t+=string(1,c);
            }
        }
        temp.push_back(t);
        if(pattern.size()>temp.size()) return false;
        map<char,string> mp; int pos=0;
        for(char c : pattern)
        {
            if(mp.find(c)==mp.end())
            {
                mp[c]=temp[pos];
            }
            else
            {
                if(mp[c]!=temp[pos]) return false;
            }
            pos++;
        }
        map<string,char> mmp; pos=0;
        for(string s : temp)
        {
            if(mmp.find(s)==mmp.end())
            {
                mmp[s]=pattern[pos];
            }
            else
            {
                if(mmp[s]!=pattern[pos]) return false;
            }
            pos++;
        }
        return true;
    }
};