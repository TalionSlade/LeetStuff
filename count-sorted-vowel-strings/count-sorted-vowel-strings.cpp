class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> v(n+1);     v[0] = 1;
        for(int j = 0; j < 5; ++j){
            for(int i = 1; i <= n; ++i){
                v[i] += v[i-1];
            }
        }
        return v[n];
    }
};