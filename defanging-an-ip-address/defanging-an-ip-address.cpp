class Solution {
public:
    string defangIPaddr(string address) {
        string newstr ="";
        for(int i =0 ; i < address.size() ;i++){
            if(address[i] != '.')
                newstr.push_back(address[i]);
            else{
                newstr.push_back('[');
                newstr.push_back('.');
                newstr.push_back(']');
            }     
        }
        return newstr;
    }
};