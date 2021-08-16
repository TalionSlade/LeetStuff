class NumArray {
public:
    vector<int> numArray;
    NumArray(vector<int>& nums) {
        int n = nums.size();
		numArray.clear();
        for(int i = 0; i < n; i++){
            //calculate and store prefix sum
            if(i == 0)
                numArray.push_back(nums[i]);
            else
                numArray.push_back(nums[i] + numArray[i - 1]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0)return numArray[right];
        return numArray[right] - numArray[left - 1]; 
    }
};
