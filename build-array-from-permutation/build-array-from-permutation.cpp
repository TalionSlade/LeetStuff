class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        auto it=nums.begin();
        while(it!=nums.end())
        {
            v[*it]=nums[nums[*it]];
            it++;
        }
        return v;
    }
};