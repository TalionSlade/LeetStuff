class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count =0;
        unordered_map<char,int> map;
        for(auto i : allowed){
            map[i]++;
        }
        for(auto i : words){
            int check=0;
            for(auto j : i){
                if(map[j]==0){
                    check++;
                    break;
                }
            }
            if(check ==0)count++;
        }
        return count;
    }
};