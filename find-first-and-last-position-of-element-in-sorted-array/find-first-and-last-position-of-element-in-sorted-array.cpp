class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {                        
        bool present = binary_search(nums.begin(), nums.end(), target);
        if(!present)
            return {-1,-1};
        else{
            auto it = find(nums.begin(), nums.end(), target);
            int idx = it-nums.begin();
            for(auto itr=it; itr!=nums.end(); itr++){
                int idx1 = itr-nums.begin();   
                if(nums[idx1]!=nums[idx])
                    return {idx, idx1-1};
                if(itr == nums.end()-1)
                    return {idx, idx1};                
            }                                                  
            
        }
        return {-1,-1};
    }
};