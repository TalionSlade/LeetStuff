/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  
    vector<int> rightSideView(TreeNode* root) {
        vector<int> vec;
        if(root== NULL) return vec;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            cout<<q.front()->val<<endl;
            int len = q.size();
            int last = -111;
            while(len--){
                auto tn = q.front();
                q.pop();
                if(tn->left)q.push(tn->left);
                if(tn->right)q.push(tn->right);
                last = tn->val;
            }
            vec.push_back(last);           
        }
        return vec;
        
    }
};