class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = 0;
       for(int i = 0 ; i< columnTitle.length() ;i++){
            char c = columnTitle[i];
            int temp = (int)(c - 'A'+1);
            n = n*26 +temp;
        }
        return(n);
    }
};