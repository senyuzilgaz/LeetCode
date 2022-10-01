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
    vector<int> travel(Node* root, vector<int> &res) {
        
        for( auto node : root -> children){
            res.push_back(node -> val);
            travel(node, res);
        }
        return res;
    }
    vector<int> preorder(Node* root){
        vector<int> res;
        if(root == nullptr)
            return res;
        res.push_back(root -> val);
        travel(root, res);
        return res;
    }
    
};