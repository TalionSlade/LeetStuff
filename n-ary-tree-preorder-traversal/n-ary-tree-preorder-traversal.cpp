class Solution {
public: 
    vector<int> result;
    void traverse(Node* root)
    {
        if(root==NULL) return;
        result.push_back(root->val);
        for(auto n : root->children)
        {
            traverse(n);
        }   
    }
    vector<int> preorder(Node* root) {
        traverse(root);
        return result;
    }
};