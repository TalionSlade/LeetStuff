class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int sum = 0 ;
        sort(nums.begin(), nums.end());
        for(auto i : nums){
            sum += abs(nums[nums.size()/2] - i);
        }
        return sum;
    }
};