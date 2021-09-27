class Solution {
public:
    int finalValueAfterOperations(vector<string>& ops) {
        int x = 0;
        for(auto i :ops){
            if(i[1]=='+') x++;
            else x--;
        }
        return x;
    }
};