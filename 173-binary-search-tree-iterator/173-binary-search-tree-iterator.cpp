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
class BSTIterator {
public:
    vector<int> inorder;
    int curr = 0;
    void inordert(TreeNode* root){
        if(root == NULL) return;
        if(root->left)inordert(root->left);
        inorder.push_back(root->val);
        if(root->right)inordert(root->right);
    }
    
    BSTIterator(TreeNode* root) {
        inordert(root);      
    }
    
    int next() {
        return inorder[curr++];
    }
    
    bool hasNext() {
        return (curr<inorder.size());
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */