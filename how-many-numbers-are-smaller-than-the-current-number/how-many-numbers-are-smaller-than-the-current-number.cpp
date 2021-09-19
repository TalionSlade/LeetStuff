class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //min config priority queue -> pop to -> hashmap -> one pass in nums
        priority_queue<int, vector<int>, greater<int> > pq;
        int count=0;
        unordered_map<int,int> m;
        vector<int> vec;
        for(auto i : nums)
            pq.push(i);        
        while(!pq.empty()){
            if(m.find(pq.top()) == m.end()){
                m[pq.top()] = count;
            }
            pq.pop();
            count++;
        }        
        for(auto i : nums)
            vec.push_back(m[i]);
        return vec;
    }
};