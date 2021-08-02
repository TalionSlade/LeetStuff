class Solution {
public:
    string convertToTitle(int n) {
        string st = "";
        while(n!=0){
            st.push_back('A'+(n-1)%26);
            n = (n-1)/26;
        }
        reverse(st.begin(),st.end());
        return(st);
    }
};