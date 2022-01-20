class Solution {
public:
int f(int n, vector<int> &dp){
	if( n == 0 or n == 1)return 1;
	if(dp[n]!=-1)return dp[n];
	int pick1 = f(n-1,dp);
	int pick2 = 0;
	if( n>=2)
	pick2 = f(n-2,dp);
	dp[n] = pick1 + pick2;
	return dp[n];
}
int climbStairs(int n){
	vector<int> dp(n+1,-1);
	dp[0] = 1;
	dp[1] = 1;
	return f(n,dp);
}

};