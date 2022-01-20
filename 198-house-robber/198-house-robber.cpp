class Solution {
public:
       int rob(vector<int>& nums){
        int n =  nums.size() -1;
        vector<int> dp(n+1,-1);

        dp[0] = nums[0];
        for(int i = 1 ; i <= n;i++){
            int pick = 0;
            if(i-2>=0)
                pick = nums[i] + dp[i-2];
            else
    		    pick = nums[i];
            int no_pick = dp[i-1];
            dp[i] = max(pick,no_pick);
        }

        return dp[n];
    }
};