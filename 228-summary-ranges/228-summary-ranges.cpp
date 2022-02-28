class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.size()==0) {
            return ans;
        }
        string s=""; int sec=nums[0]; int i;
        s+=to_string(nums[0]);
        for(i=1;i<nums.size();i++) {
            if(nums[i-1]+1!=nums[i]) {
                string t = to_string(nums[i-1]);
                if(s!=t) {
                    s+="->";
                    s+=t;
                }
                ans.push_back(s);
                sec=nums[0];
                s=to_string(nums[i]);
            }
            else {
                sec = nums[i];
            }
        }
        if(sec!=nums[0]) {
            s+="->";
            s+=to_string(nums[i-1]);
        }
        ans.push_back(s);
        return ans;
    }
};