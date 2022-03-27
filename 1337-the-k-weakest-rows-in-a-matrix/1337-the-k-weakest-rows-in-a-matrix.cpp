class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        map<int,int> weight;
        for(int i = 0 ; i < mat.size() ; i++){
            int sum = 0;
            for(int j = 0 ; j < mat[i].size() ;j++){
                sum+=mat[i][j];
            }
            weight[sum*100+i] = i;
        }
        
        auto it = weight.begin();
        vector<int> res;
        for(int i = 0 ; i <k;i++){
            res.push_back(it->second);
            it++;
        }
        return res;
    }
};