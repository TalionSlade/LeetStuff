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
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> submit;
        if(root == NULL)return submit;
        if(root->left != NULL){
            vector<int> temp = inorderTraversal(root->left);
            submit.insert(submit.end(), temp.begin(), temp.end());}
        submit.push_back(root->val);
        if(root->right !=NULL){
            vector<int> temp2 = inorderTraversal(root->right);\
            submit.insert(submit.end(), temp2.begin(), temp2.end());}
        return submit;
    }
};