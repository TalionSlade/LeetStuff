class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)return 0;
        if(n==1)return 1;
        vector<int> vec;
        vec.push_back(0);
        vec.push_back(1);
        int max =1;
        for(int i = 2; i <=n ; i++){
            if(i%2 == 0){
                vec.push_back(vec[i/2]);
            }else{
                vec.push_back(vec[i/2] + vec[(i+1)/2]);
            }
            if(vec[i]>max){
                max = vec[i];
            }
        }
        return(max);
    }
};