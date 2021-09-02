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
    vector<string> result;
    void traverse(TreeNode* root ,string temp){
        if(root->left==NULL and root->right==NULL)result.push_back(temp);
        if(root->left !=NULL)traverse(root->left ,temp+"->"+to_string(root->left->val ));
        if(root->right!=NULL)traverse(root->right,temp+"->"+to_string(root->right->val));        
    }    
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root == NULL) return result;
        traverse(root,to_string(root->val));
        return result;
    }
};