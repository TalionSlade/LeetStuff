class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int first = 0;
        int last = size-1;
        
        while(first<=last)
        { // int mid = (first+last)/2     may exceed the int range for large values,
          //  mid = first+ (last-first)/2  is same as mid = (first+last)/2    (simple math)
 
            int mid = last + (first - last)/2;   //int mid = first+ (last-first)/2
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                first = mid+1;
            else
                last = mid-1;       
         }
        
        return -1;
    }
};