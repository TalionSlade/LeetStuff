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
    int minDepth(TreeNode* root) {
        
        //base cases
        if(root == NULL)return 0;        
        if(root->left ==NULL && root->right == NULL)return 1;
        
        //recur
        return( min(root->left ==NULL ? INT_MAX :minDepth(root->left)+1,root->right == NULL ?INT_MAX:minDepth(root->right)+1));
       
        
        
    }
};