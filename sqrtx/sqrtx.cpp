class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        if(x==1)return 1;
        long long int sq = 1;
        for(long long int i = 1 ; i <= x/2 ; i++){
            if(i*i <= x){
                sq = i;               
            }else{
                break;
            }
        }
        return sq;        
    }
};