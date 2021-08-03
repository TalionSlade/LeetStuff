class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max = INT_MIN;
        for(int i= arr.size()-1 ; i>=0 ; i--){
            if(max < arr[i]){
                int temp = arr[i];
                arr[i] =max;
                max = temp;
            }else{
                arr[i]=max;
            }
            
        }
        arr[arr.size()-1]  = -1;
        return arr;         
    }
};