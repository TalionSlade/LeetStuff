class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> table;
        for(auto it : nums){
            if(table[it]==1)return true;
            table[it]++;
        }
        return false;
    }
};