class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        int count=0;
        for(auto c : jewels)
        {
            m[c]++;
        }
        for(auto s : stones)
        {
            if(m[s]>0) count++;
        }
        return count;
    }
};