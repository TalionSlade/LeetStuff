class Solution {
public:
    int guessNumber(int n) {
        int left =1 , right = n;
        if(guess(n) == 0)return n;
        while(left < right){
            int mid = left + (right - left)/2;
            if(!guess(mid))return mid;
            else{
                if(guess(mid) > 0) left = mid;
                else right =mid;
            }
        }
        return 0;
    }
};