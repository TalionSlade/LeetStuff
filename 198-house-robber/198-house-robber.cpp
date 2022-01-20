class Solution {
public:
    int f(int n , vector<int>& nums,vector<int>& dp){
	if(n == 0)return nums[0];
	if(n < 0) return 0; 
	if(dp[n]!=-1)return dp[n];
	int pick =  nums[n] + f(n-2,nums,dp);
	int not_pick = 0 + f(n-1,nums,dp);
	//cout<<"pick = "<<pick<<" non-pick ="<<not_pick<<endl;
	return dp[n] = max(pick,not_pick);

}

int rob(vector<int>& nums){
	int n =  nums.size() -1;
    vector<int> dp(n+1,-1);
	return f(n,nums,dp);
}
};