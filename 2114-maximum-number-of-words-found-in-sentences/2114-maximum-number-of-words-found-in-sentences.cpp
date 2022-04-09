class Solution {
public:
    int wordCalc(string sentence){
        int n=1;
        for(auto i : sentence)
            if(i == ' ')n++;
        return(n);
    }
    int mostWordsFound(vector<string>& sentences) {
        
        int maxi = 0 ;
        for(auto i : sentences)
            maxi = max(maxi,wordCalc(i));
        return maxi;
    }
};