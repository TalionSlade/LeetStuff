class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> dists;
        for(int i =0 ; i< s.length();i++){
            if(s[i]==c){
                dists.push_back(i);
            }
        }
        vector<int> res;
        
        for(int i =0 ,j=0; i< s.length();i++){            
            if(abs(i - dists[j]) > abs(i - dists[(j+1)%dists.size()])){
                j++;                
            }
            res.push_back(abs(i - dists[j]));
        }
        return res;
        
    }
};