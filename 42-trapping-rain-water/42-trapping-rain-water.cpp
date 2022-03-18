class Solution {
public:
    int trap(vector<int>& height) {
        
//         ////////////////////////////////////////Method 1/////////////////////////////////////////////
                
//         //prefix array
//         vector<int> pref(height.size() , 1);
//         int max_h = height[0];
//         for(int i  =1 ; i < height.size() ; i++){
//             pref[i] = max_h;
//             max_h = max(max_h,height[i]);
//         }
//         //suffix array 
//         vector<int> suf(height.size() , 1);
//         max_h = height[height.size()-1];
//         for(int i = height.size()-1 ; i >=0 ; i--){
//             suf[i] = max_h;
//             max_h = max(max_h , height[i]);
//         }
//         //calculate water
//         int sum  = 0 ;
//         for(int i = 0 ; i < height.size();i++){
//             cout <<  min(suf[i],pref[i]) - height[i] <<endl;
//             sum += min(suf[i],pref[i]) - height[i];
//         }
//         return sum;
        
            //////////////////////////////////////Method 2//////////////////////////////////////////////
        
        int n = height.size();
        int left= 0 , right = n-1;
        int res = 0;
        int maxright = 0 , maxleft = 0;        
        while(left < right){            
            if(height[left] <= height[right]){                
                if(height[left] >= maxleft) maxleft = height[left];
                else{
                    res += maxleft-height[left];
                }
                left++;                
            }else{                      
                if(height[right] >= maxright) maxright = height[right];
                else{
                    res+= maxright-height[right];
                }                
                right--;
            }          
        }
        return res;
    }
};