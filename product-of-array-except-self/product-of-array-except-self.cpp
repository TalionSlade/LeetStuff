class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prod of ele on left :-
        vector<int> left (nums.size(), 1);
        for(int i =1 ; i< left.size() ; i++)
            left[i]=nums[i-1]*left[i-1];
        //prof of ele on right:- 
        vector<int> right (nums.size(), 1);
        for(int i = nums.size() -2 ; i >=0 ; i--)
            right[i] = right[i+1]*nums[i+1];
        //answer :-
        for(int i =0 ; i < nums.size() ;i++ )
            left[i]*= right[i];
        return left;
    }
};