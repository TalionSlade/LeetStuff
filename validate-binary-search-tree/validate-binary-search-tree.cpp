class Solution {
public:
    bool isValidBST(TreeNode* root) {
        int value = root->val;
        return check(root->left,  value, LLONG_MIN) && check(root->right, LLONG_MAX, value);
    }
    
    bool check(TreeNode* root, long long int max, long long int min) {
        if (root==nullptr)
      {	
	     return true;
      }  
        if (root-> val <= min || root->val >= max)//checking by comparing values
		{
            return false;
       }
        bool Left = check(root->left, root->val, min);
        bool Right=check(root->right,max,root->val);
        return Left&&Right;
    }
    
};