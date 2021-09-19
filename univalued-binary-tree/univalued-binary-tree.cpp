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
    bool traverse(TreeNode* root, int val){
        bool right= true,left = true;
        if(root->right){
            right = ( root->right->val==val ) and traverse(root->right,val);
        }   
        if(root->left){
            left =  ( root->left->val == val) and traverse(root->left,val);
        }
        return right and left;
    }    
    bool isUnivalTree(TreeNode* root) {
        if(root == NULL) return true;
        return traverse(root,root->val);
    }
};