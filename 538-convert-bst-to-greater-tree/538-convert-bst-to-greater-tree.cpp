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


//traversal Right -> Node -> Left


class Solution {
public:   
    void solve(TreeNode *root, int &num)
    {
        if(root == NULL)
            return;
        solve(root->right, num);
        root->val = num + root->val;
        num = root->val;
        solve(root->left, num);
    }
    TreeNode* convertBST(TreeNode* root) {
        int num=0;
        if(root==NULL)
            return  root;
        else{
            solve(root,num);
            return root;
        }
    }
};