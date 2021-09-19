class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i : nums)
            m[i]++;
        int count =0;
        auto it = m.begin();
        while(it != m.end()){
            if(it->second > 0)
            count += (it->second*(it->second-1)/2);
            it++;
        }    
        return count;
    }
};