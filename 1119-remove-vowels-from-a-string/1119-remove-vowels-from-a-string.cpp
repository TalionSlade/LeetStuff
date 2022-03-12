class Solution {
public:
    bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    else 
        return false;
    }

    string removeVowels(string s) {
        string res = "";
        for (int i = 0; i < s.size(); i++) {
            if (!isVowel(s[i]))
                res += s[i];
        }

        return res;
    }
};