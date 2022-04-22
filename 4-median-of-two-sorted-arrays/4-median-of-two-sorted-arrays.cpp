class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> arr;
        for(auto i : nums1)
            arr.push_back(i);        
        for(auto i : nums2)
            arr.push_back(i);
        sort(arr.begin(),arr.end());
        if(arr.size()%2 == 1){
            return arr[arr.size()/2];
        }else{
            return (arr[arr.size()/2]+arr[(arr.size()/2)-1])/2;
        }
    }
};