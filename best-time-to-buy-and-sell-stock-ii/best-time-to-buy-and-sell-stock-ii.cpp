class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 , bought=prices[0];
        bool isbought = false;
        for(int i = 1 ; i<prices.size() ; i++ ){
            //bull
            if(!isbought && prices[i-1]<prices[i]){
                bought = prices[i-1];
                isbought = true;
                cout<<"was here"<<endl;
            }                    
            //bear
            else if(isbought && prices[i-1]>prices[i]){
                isbought= false;
                profit += prices[i-1] -bought; 
                cout<<"was here 2"<<endl;
            }
            
        }
        if(isbought){
            profit+= (prices[prices.size()-1] -bought);
        }
        return(profit);
    }
};