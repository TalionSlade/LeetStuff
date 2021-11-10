class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector <string> transformation = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set <string> output;
        string temp = "";

        for (auto i : words)
        {
            temp = "";

            for(auto j : i)
                temp += transformation[j - 'a'];

            output.insert(temp);
            temp = "";
        }

        return output.size();
    }
};