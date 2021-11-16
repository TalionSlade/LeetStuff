class Solution {
public:
    string interpret(string com) {
        string str;
        
        for(int i = 0 ; i < com.size() ; i++){
            cout<<com[i]<<endl;
            if(com[i] == 'G') {
                str.push_back('G');
            }    
            else if(com[i] == '(' && com[i+1] == ')'){
                str.push_back('o');
                i++;
            }
            else if(com[i] == '(' && com[i+1] == 'a'){
                str.push_back('a');
                str.push_back('l');
                i+=3;
            }
        }
        return str;
    }
};