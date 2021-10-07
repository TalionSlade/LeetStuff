class Solution {
public:
    int fib(int n) {
        //what is important till now
        //whatever is important has a dimension in the matrix

        vector<int> vec;
        if(n <=1)return n;
        vec.push_back(0);
        vec.push_back(1);
        int first = 0 , second = 1 , third = 1;
        for(int i =2 ; i<= n ;i++){
            third = first + second;
            first = second;
            second = third;
        }    
        return third;
    }
};