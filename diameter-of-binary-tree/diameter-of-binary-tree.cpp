class Solution {
public:
    int maxi =0;
    int solve(TreeNode* root) {
        if(!root) { //no root so depth = 0
            return 0;
        }
        int left  = solve(root->left ); //max depth of left half
        int right = solve(root->right); //max depth of right half
        int temp = left + right + 1; //if this had been the longest path then?
        maxi = max(temp,maxi);
        return 1 + max(left, right); //current node included in the path
    } 
    
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return maxi-1; //no. of edges = no. of nodes - 1
    }
};