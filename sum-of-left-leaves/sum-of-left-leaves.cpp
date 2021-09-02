class Solution {
public:
    int sum = 0;
    void isLeft(TreeNode* root, bool Left){       
        if(Left and root->left==NULL and root->right==NULL)sum+=root->val;
        if(root->left!=NULL)isLeft(root->left,true);
        if(root->right!=NULL)isLeft(root->right,false);        
    }     
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL and root->right==NULL)return 0;
        isLeft(root,false);
        return sum;
    }
};