class Solution {
public:
    int reverse(int x) {
        int rem{0};
        long sum{0};
        
		/* reverese the digits */
        while(x != 0) {
            sum = (sum * 10) + (x % 10);
            x = x / 10;
        }
        
		/* check if sum is in range of signed int */
        if(sum < -2147483648 
          || sum > 2147483648) {
            return 0;
        }
        return sum;
    }
};