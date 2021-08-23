class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto it = nums.begin();
        int size = nums.size();
        while(size--){
            if(*it == 0){
                it = nums.erase(it);
                nums.push_back(0);
            }else{
            it++;
            }    
        }
    }
};