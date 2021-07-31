class Solution {
public:
    vector<int> ret;
    //N -> l -> r 
    void preorder(TreeNode* root){
        if(root == NULL) return;
        ret.push_back(root->val);
        preorder(root->left);
        preorder(root->right);        
    }    
    vector<int> preorderTraversal(TreeNode* root){
        preorder(root);
        return(ret);
    }
};