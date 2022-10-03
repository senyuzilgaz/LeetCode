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
    bool isValidBST(TreeNode* root) {
        vector<int> tree;
        pushTree(root, tree);
        for(int i = tree.size() - 1; i > 0; --i){
            if(tree[i] <= tree[i-1])
                return false;
        }
        return true;
    }
    
    void pushTree(TreeNode* root, vector<int> &tree){
        if(!root)
            return;
        pushTree(root -> left, tree);
        tree.push_back(root -> val);
        pushTree(root -> right, tree);
        return;
    }

};