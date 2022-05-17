class Solution {
public:
    int minOperations(int n) {
        int l = 0;
        int r = n-1;
        int moves = 0;
        while(l < r){
            moves += (r*2 - l*2)/2;
            l++;
            r--;
        }
        return moves;
    }
};