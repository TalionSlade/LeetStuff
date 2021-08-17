class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),sum=0;
        if(n==1) return 0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>=nums[i]){
                int p=nums[i-1]-nums[i];
                sum+=p +1; 
                nums[i]+=p+1;
            } 
        }
        return sum;
    }
};