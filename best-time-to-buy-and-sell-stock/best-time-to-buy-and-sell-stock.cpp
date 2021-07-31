class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)return 0;
        stack<int> st;
        int profit =0;
        auto it =  prices.begin();
        while(it != prices.end()){
            if(st.empty()){
                st.push(*it);
            }else if( st.top()> *it){
                st.pop();
                st.push(*it);
            }else{
                if(profit < (*it - st.top())){
                    profit = *it - st.top();
                }
            }
            ++it;
        }
        return(profit);
    }
};