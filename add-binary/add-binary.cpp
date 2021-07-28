class Solution {
public:
    string addBinary(string a, string b) {
        //reverse string as addition occurs right to left bitwise
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int carry = 0;
        string ans="";
        int i=0;
        //add the common length section of two numbers
        while(i<a.length() && i<b.length()){
            int sum = carry + (a[i] - '0') + (b[i]-'0');
            //binary carry
            carry = sum>=2 ? 1 : 0;
            ans += (sum%2) + '0';
            i++;
        }
        //adjust the carry extra section of a or else
            if(i<a.length()){
                while(i<a.length()){
                    int sum = carry + (a[i] - '0');
                    carry = sum>=2 ? 1 : 0;
                    ans += (sum%2) + '0';
                    i++;
                }
            }else{
                while(i<b.length()){
                    int sum = carry + (b[i] - '0');
                    carry = sum>=2 ? 1 : 0;
                    ans += (sum%2) + '0';
                    i++;
                }
            }
        //add carry the end if it exists and reverse
        if(carry) ans += carry + '0';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};