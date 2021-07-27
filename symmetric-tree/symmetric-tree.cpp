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
     bool isMirror(TreeNode* p, TreeNode* q) {
        return !p && !q || p && q && p->val == q->val && isMirror(p->left, q->right) && isMirror(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        return (!root) ||(isMirror(root->right, root->left));
    }
};