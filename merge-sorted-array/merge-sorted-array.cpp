class Solution{
    public:
    void merge(vector<int>& nums1, int m, const vector<int>& nums2, int n)
        {
            unsigned write = n + m - 1;
            --m;
            --n;
            while(n >= 0 && m >= 0){
                const int num1 = nums1[m];
                const int num2 = nums2[n];
                nums1[write] = std::max(num1, num2);
                if(num1 > num2){
                    --m;
                } else {
                    --n;
                }
                --write;
            }
            while(n >= 0){
                nums1[write] = nums2[n];
                --n;
                --write;
            }
        }
    
};
