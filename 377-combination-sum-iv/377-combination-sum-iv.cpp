class Solution {
public:
    int combinationSum4(vector<int>& coins, int target) {
         
    vector<unsigned int> dp(target + 1,0);
    dp[0] = 1;
    for(int amt = 1 ; amt <= target ; amt++)
    {
        for(int coin : coins)
        {
            if(coin <= amt)
            dp[amt] += dp[amt - coin];
        }
    }
    
    return dp[target];
    }
};