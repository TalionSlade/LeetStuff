class Solution {
public:
    // The following function calculates the area of the triangle having three vertices as f,s, and t
    double area(vector<int>&f,vector<int>&s,vector<int>&t) {
        double p=(double)(f[0]*s[1]+s[0]*t[1]+t[0]*f[1]);
        double d=(double)(f[1]*s[0]+s[1]*t[0]+t[1]*f[0]);
        return 0.5*abs(p-d);
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans=0;
        // Generate all possible combinations of 3 points and calculate the area and take their maximum
        for(int i=0;i<points.size();i++) {
            for(int j=i+1;j<points.size();j++) {
                for(int k=j+1;k<points.size();k++) {
                    ans=max(ans,area(points[i],points[j],points[k]));
                }
            }
        }
        return ans;
    }
};