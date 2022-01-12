class Solution {
public:
    int maxDepth(TreeNode* root) {
            if(root == NULL)
                return 0;
            int depth = 1;
            return dfs(root, depth);
        }
        int dfs(TreeNode* root, int d){
            if(root == NULL){
                return d-1;
            }
            if(root->right==NULL && root->left == NULL){
                return d;
            }
            return max(dfs(root->left, d+1),dfs(root->right, d+1) );
        }
};