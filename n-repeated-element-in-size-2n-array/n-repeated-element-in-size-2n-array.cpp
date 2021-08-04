class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int> m;
        auto it=nums.begin();
        while(it!=nums.end())
        {
            m[*it]++;
        it++;
        }
        auto it2=m.begin();
        while(it2!=m.end())
        {
            if(it2->second==n)
            {
                return it2->first;
            }
        it2++;
        }
        return 0;
    }
};
