class Solution {
public:
    int trailingZeroes(int n) {
        int t =5;
        int count5 = 0;
        while(n/t != 0){            
            count5 += n/t;
            t = t*5;
        }
        return count5;
    }
};