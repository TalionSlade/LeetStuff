class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int current = 0;
        for(auto it :  nums){
            current += it;
            res.push_back(current);
        }
        return res;
    }
};