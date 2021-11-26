/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    
    void traverse(Node* root , vector<int> &v){
        if(!root)return;
        for(auto i : root->children)
            traverse(i,v);
        v.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> v;
        traverse(root,v);
        return v;
    }
};