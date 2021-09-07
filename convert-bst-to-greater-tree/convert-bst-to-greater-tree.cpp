class Solution {
public:
    int curr = 0;
    void gst(TreeNode* root){
        //base conditions
        if(root == NULL)return;       
        //reverse inorder 
        if(root->right)gst(root->right);
        root->val+=curr;
        curr = root->val;
        if(root->left)gst(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        gst(root);
        return root;
    }
};
