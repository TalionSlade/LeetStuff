class Solution {
public:
    
    void genLeaf(TreeNode* root,vector<int> &curr){
        if(root->left==NULL and root->right==NULL){
            curr.push_back(root->val);
        }
        if(root->left) genLeaf(root->left ,curr);
        if(root->right)genLeaf(root->right,curr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> curr1,curr2;
        genLeaf(root1, curr1);
        genLeaf(root2, curr2);
        if(curr1.size() != curr2.size())return false;
        for(int i = 0 ; i < curr1.size();i++){
            if(curr1[i]!= curr2[i]) return false;
        }
        return true;
    }
};