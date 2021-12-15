class Solution {
public:
    int climbStairs(int n) {
        if(n== 1)return 1;
        if(n== 2)return 2;
        int first = 1;
        int second = 2;
        int third = 0;
        for(int i = 3 ; i<=n;i++){
            third = second+ first;
            first  = second;
            second = third;
        }
        return third;
    }
};