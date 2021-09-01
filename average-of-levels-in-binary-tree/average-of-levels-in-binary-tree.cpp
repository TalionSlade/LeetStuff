class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> result;
        if(!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            double sum = 0 ,s = q.size();
            for(int i=0 ; i< s;i++){
                if(q.front()->left )q.push(q.front()->left );
                if(q.front()->right)q.push(q.front()->right);
                sum += q.front()->val;
                q.pop();    
            }
            sum/= s;
            result.push_back(sum);
        }
        return result;
    }
};