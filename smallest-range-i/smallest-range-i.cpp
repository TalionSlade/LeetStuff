class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int n=A.size(),ma=INT_MIN,mi=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ma=max(ma,A[i]);
            mi=min(mi,A[i]);
        }
        return max(0,ma-mi-2*K);
    }
};