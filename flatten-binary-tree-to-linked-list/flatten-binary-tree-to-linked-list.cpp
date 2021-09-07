class Solution {
public:
    TreeNode* prev=NULL;
    void flatten(TreeNode* root) {
        auto* temp=root;
        if(temp==NULL) return;
        flatten(temp->right);
        flatten(temp->left);
        temp->right=prev;
        temp->left=NULL;
        prev=temp;
    }
};