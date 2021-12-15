class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n =  nums.size();
        int e_sum = n*(n+1)/2;
        
        int sum =0;
        for(int i : nums)
            sum+=i;
        cout<<sum<<" "<<e_sum<<endl;
        return(e_sum - sum);
    }
};