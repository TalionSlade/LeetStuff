class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        if(arr.size()<3)return false;
        int i = 0,j = arr.size()-1;
        for(i = 0 ; i < arr.size()-2;i++){
            if(arr[i]>=arr[i+1]){
                break;
            }
        }
        for( ; j > 1;j--){
            if(arr[j-1]<=arr[j]){
                break;
            }
        }
        return(i==j);
    }
};