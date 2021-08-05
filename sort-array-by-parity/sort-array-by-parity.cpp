class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> vec;        
        auto it = nums.begin();
        while(it != nums.end()){
            if(*it%2==0){
                cout<<*it<<endl;
                vec.push_back(*it);
                it = nums.erase(it);
            }
            else
            ++it;
        }
        it = nums.begin();
        while(it!= nums.end()){
            vec.push_back(*it);
            cout<<*it<<endl;
            ++it;
        }
        
        return vec;
    }
};