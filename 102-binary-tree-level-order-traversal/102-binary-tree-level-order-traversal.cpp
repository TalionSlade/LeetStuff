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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
       
        vector<vector<int>> result;
         if(root==NULL)return result;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            vector<int> temp;
            int length = q.size();
            for(int i = 0 ; i< length;i++){
                TreeNode* t = q.front();
                q.pop();
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
                temp.push_back(t->val);
            }
            result.push_back(temp);           
        }
        return result;
    }
};