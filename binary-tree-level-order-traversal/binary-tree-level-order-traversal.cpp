class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL)return result;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            
            vector<int> temp;
            int n = q.size();
            for(int i = 0 ; i < n;i++){
                temp.push_back(q.front()->val);
                cout<<q.front()->val;
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                q.pop();
            }
            cout<<endl;
            result.push_back(temp);
        }
        return result;
    }
};