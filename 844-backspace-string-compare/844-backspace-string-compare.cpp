class Solution {
public:
    
    string backspacer(string s){
        string newstr = "";
        for(auto i : s){
            if(i == '#' ){
                if(newstr.size()!=0)
                newstr.pop_back();
            }else{
                newstr += i;
            }
        }  
        return newstr;
    }       
    bool backspaceCompare(string s, string t) {
        cout<< backspacer(s) << " and " <<backspacer(t) <<endl;
        return (backspacer(s).compare(backspacer(t))==0);
    }
};