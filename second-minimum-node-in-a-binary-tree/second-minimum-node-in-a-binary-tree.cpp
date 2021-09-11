class Solution {
public:
    long smol= LONG_MAX , smol2 = LONG_MAX;
    void traversal(TreeNode* root){
        if(root==NULL)return ;
        if(root->val < smol){ smol2 = smol;smol = root->val; }
        else if(root->val <= smol2 and root->val != smol) smol2 = root->val;
        
        if(root->left)traversal(root->left);
        if(root->right)traversal(root->right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        traversal(root);
        if(smol == smol2 or smol2 == LONG_MAX)return -1;
        return (int)smol2;
    }
};