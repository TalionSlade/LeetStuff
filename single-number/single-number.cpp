class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> table;
        auto it = nums.begin();
        while(it != nums.end()){
            if(table.find(*it)==table.end())
                table.insert(pair<int,int>(*it,*it));
            else
                table.erase(*it);
            ++it;
        }
        return(table.begin()->first);
    }
};