class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r = 0 , b = nums.size()-1;
        for(int i = 0 ; i < nums.size();)
        {
            int temp = nums[i];
            if(nums[i] == 0 and i > r){
                //swap at red pointer
                nums[i] = nums[r];
                nums[r++] = temp;
            }
            else if(nums[i] ==2 and i < b){
                //swap at blue pointer
                nums[i]  = nums[b];
                nums[b--]= temp;
            }else{
                i++;
            } 
        }
    }
};