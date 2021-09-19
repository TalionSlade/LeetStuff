class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int e) {
        vector<bool> vec;
        int maxx = INT_MIN;
        for(auto i : candies)
            maxx = max(i,maxx);        
        for(auto i : candies)
            vec.push_back(maxx<=i+e);
        return vec;
    }
};