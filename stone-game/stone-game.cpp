class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alex = 0;
        int lee = 0; 
        bool turn = true;
        while(!piles.empty()){
            if(turn){
                if(piles.front()> piles.back()){
                    alex+=piles.front();
                    piles.erase(piles.begin());
                }else{
                    alex+=piles.back();
                    piles.pop_back();
                }
            }else{
                if(piles.front()> piles.back()){
                    lee+=piles.front();
                    piles.erase(piles.begin());
                }else{
                    lee+=piles.back();
                    piles.pop_back();
                }
            }
        }
        return(alex>=lee);
        
        
    }
};