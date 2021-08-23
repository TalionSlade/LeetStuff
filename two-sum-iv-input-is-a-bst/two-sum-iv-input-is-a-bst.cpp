class Solution {
public:
    unordered_map<int , int> m;
    bool flag = false;
    void dfs(TreeNode* root ,int k){
        if(root == NULL)return;
        if(m[k - root->val]!=0)flag = true;
        else{
            m[root->val]++;
        }
        dfs(root->left , k);
        dfs(root->right , k);
        
    }
    bool findTarget(TreeNode* root, int k) {
       dfs(root,k);
       return flag; 
    }
};