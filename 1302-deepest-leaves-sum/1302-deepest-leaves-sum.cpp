/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public: 
    
    int max_depth = 0 ;
    
    void findDepth(TreeNode* root,int depth){    
        //cout<<max_depth<<endl;
        max_depth = max(depth,max_depth);
        if(root->left)findDepth(root->left,depth+1);
        if(root->right)findDepth(root->right, depth+1);
    }
    int sum = 0;
    void deeptraversal(TreeNode* root, int curr_depth){
        //cout<<max_depth<<" "<<curr_depth<<endl; 
        if(max_depth == curr_depth)
            sum += root->val;
        if(root->left)deeptraversal(root->left,curr_depth+1);
        if(root->right)deeptraversal(root->right,curr_depth+1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        //cout<<max_depth<<" "<<sum<<endl;
        findDepth(root,0);
        deeptraversal(root,0);
        //cout<<max_depth<<" "<<sum<<endl;
        return sum;
    }
};