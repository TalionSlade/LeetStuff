class Solution {
public:
    string defangIPaddr(string address) {
        string str = "";
        string dfng = "[.]";
        
        for(auto i : address){
            if(i == '.'){
                str+=dfng;
            }else{
                str+=i; 
            }           
        }
        return str;
    }
};