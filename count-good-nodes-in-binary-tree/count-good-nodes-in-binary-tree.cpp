
class Solution {
public:
     
    
    int maxInPath(TreeNode* root, int maxz){
        if(root == NULL) return 0;
        //cout<<root->val<<endl;
        int left = 0 , right =0;
        if(root-> left){
            if(maxz <= root->left->val){
                left += 1+ maxInPath(root->left,root->left->val);
                cout<<root->left->val<<endl;
            }else{
                left+= maxInPath(root->left,maxz);
            }
        }
        if(root-> right){
            if(maxz <= root->right->val){
                right += 1+ maxInPath(root->right,root->right->val);
                cout<<root->right->val<<endl;
            }else{
                right+= maxInPath(root->right,maxz);
            }
        }
        return(left+right);         
    }      
    int goodNodes(TreeNode* root) {
        if(root==NULL)return 0;
        return maxInPath(root,root->val)+1;
    }
};