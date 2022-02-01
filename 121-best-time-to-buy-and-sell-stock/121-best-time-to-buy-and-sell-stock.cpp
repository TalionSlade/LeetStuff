class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)return 0;
        int st =-1;
        int profit =0;
        auto it =  prices.begin();
        while(it != prices.end()){
            if(st < 0){
                st = *it;
            }else if( st > *it){
                st = *it;
            }else{
                profit = max(profit , *it-st);
            }
            ++it;
        }
        return(profit);
    }
};