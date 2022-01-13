class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int , int> m;
        vector<int> vec;
        for(auto i : nums){
            if(m[i]>0)vec.push_back(i);
            m[i]++;
        }
        return(vec);
    }
};