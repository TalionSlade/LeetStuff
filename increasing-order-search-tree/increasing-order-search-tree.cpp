class Solution {
public:
    TreeNode* result=NULL,*pre=NULL;
    void inorder(TreeNode* root)
    {
        if(root==NULL) return;
        //left
        inorder(root->left);
        //process node
        if(result == NULL)result =root;
        else
            pre->right = root;        
        pre = root;
        root->left = NULL;
        //right
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return result;
    }
};