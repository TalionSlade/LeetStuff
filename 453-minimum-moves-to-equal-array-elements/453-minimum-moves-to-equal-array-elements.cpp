class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long res=0;
        for(int i=1;i<nums.size();i++ )
        {
            res+=nums[i]-nums[0];
        }
        return res;
    }
};