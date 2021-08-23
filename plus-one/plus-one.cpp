class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int e=digits.size()-1; int carry=1;
        for(int i=e;i>=0;i--){
            digits[i]=(digits[i]+carry)%10;
            if(digits[i]!=0){    
                carry=0; 
                break;
            }
        }
        if(carry!=0) digits.insert(digits.begin(),1);
        return digits;
    }
};