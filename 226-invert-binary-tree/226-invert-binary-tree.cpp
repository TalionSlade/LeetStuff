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
    
    void reverse(TreeNode* root){
        TreeNode* l = root->right;
        root->right=root->left;
        root->left = l;
        
        if(root->left ) reverse(root->left);
        if(root->right) reverse(root->right);
    }    
    
    TreeNode* invertTree(TreeNode* root) {
        if(root)reverse(root);
        return(root);
    }
};