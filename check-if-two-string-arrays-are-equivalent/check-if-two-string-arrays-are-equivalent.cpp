class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string temp1; string temp2;
        auto it1=word1.begin(); auto it2=word2.begin();
        while(it1!=word1.end() && it2!=word2.end())
        {
            temp1+=*it1; temp2+=*it2;
            it1++; it2++;
        }
        while(it1!=word1.end())
        {
            temp1+=*it1; it1++;
        }
        while(it2!=word2.end())
        {
            temp2+=*it2; it2++;
        }
        if(temp1==temp2) return true;
        return false;
    }
};