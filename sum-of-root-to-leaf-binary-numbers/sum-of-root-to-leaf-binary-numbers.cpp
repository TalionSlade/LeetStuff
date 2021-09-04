class Solution {
public:
    int sum=0;
    void topdown(TreeNode* node,int path){
        if(!node)return;
        path*=2;
        path+=node->val;
        if(!node->left && !node->right)sum+=path ;
        if(node->left ) topdown(node->left ,path);        
        if(node->right) topdown(node->right,path);
    }
    int sumRootToLeaf(TreeNode* root) {
        topdown(root,0);
        return sum;
    }
};