class Solution {
public:
    int tribonacci(int n) {
        if(n==0)return 0;
        if(n==1 || n==2 )return 1;
        int first = 0, second = 1, third =1, tribo;
        for(int i =3 ;i<=n;i++){
            tribo = third+ second+ first;
            first= second;
            second = third;
            third = tribo;
        }
        return tribo;
    }
};