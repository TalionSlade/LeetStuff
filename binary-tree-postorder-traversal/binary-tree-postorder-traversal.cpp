class Solution {
public:
    vector<int> ret;
    //l -> r -> n
    void postorder(TreeNode* root){
        if(root == NULL) return;        
        postorder(root->left);
        postorder(root->right); 
        ret.push_back(root->val);
    }    
    vector<int> postorderTraversal(TreeNode* root){
        postorder(root);
        return(ret);
    }
};