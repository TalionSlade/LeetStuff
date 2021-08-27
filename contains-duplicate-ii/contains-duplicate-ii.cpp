class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> pos;
        //update with latest occurence
        for(int it = 0 ; it<nums.size() ; it++){
            if(pos[nums[it]] == 0)
                pos[nums[it]]=it +1;
            else if( (it -  pos[nums[it]]) <k )
                return true;
            pos[nums[it]]=it +1;
            cout<<it<<" "<<pos[nums[it]]<<endl;
        }
        return false;
    }
};