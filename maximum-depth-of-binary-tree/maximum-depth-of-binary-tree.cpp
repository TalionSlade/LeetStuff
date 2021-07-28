class Solution {
public:
    int max = 0;
    int maxDepth(TreeNode* root) {
        //base case
        if(root == NULL)return 0;
        
        //get depth
        int left  =  maxDepth(root->left)+1;
        int right =  maxDepth(root->right)+1;
        
        //return time
        if(left>right)return left;
        else return right;
    }
};