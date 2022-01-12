class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int , int > m;
        for(auto i :nums){
            if(m[i] > 0) return i;
            m[i]++;
        }
        return nums[0];
    }
};