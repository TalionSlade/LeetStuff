class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL)return result;
        queue<TreeNode*> q;
        q.push(root);
        int count = 0;
        while(!q.empty()){            
            vector<int> temp;
            int n = q.size();
            for(int i = 0 ; i < n;i++){
                temp.push_back(q.front()->val);
                if(q.front()->left)q.push(q.front()->left);
                if(q.front()->right)q.push(q.front()->right);
                q.pop();
            }
            if(count++%2 == 1) reverse(temp.begin() , temp.end());
            result.push_back(temp);
        }
        return result;
    }
};