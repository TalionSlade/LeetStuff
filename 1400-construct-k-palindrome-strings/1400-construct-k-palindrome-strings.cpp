class Solution {
public:
    bool canConstruct(string s, int k) {
        
        
        //by observation ,
        //at max K characters can occur odd times
        //rest must be even 
        if(s.size()<k)return false;
        unordered_map<char, int> m;
        for(auto i : s){
            m[i]++;
        }
        int count=0;
        auto it = m.begin();
        while(it!=m.end()){
            if(it->second %2 ==1)count++;
            it++;
        }
        return(count<=k);
    }
};