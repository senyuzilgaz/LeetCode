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
        cout << tree.size();
        for(int i = tree.size() - 1; i > 0; --i){
            cout << tree[i];
            if(tree[i] <= tree[i-1])
                return false;
        }
        return true;
    }
    
    void pushTree(TreeNode* root, vector<int> &tree){
        if(!root)
            return;
        stack<TreeNode*> sta;
        TreeNode *current = root;
    
        while(current || !sta.empty()){
            while(current){
                sta.push(current);
                current = current -> left;
            }
            current = sta.top();
            sta.pop();
            tree.push_back(current -> val);
            current = current -> right;
                
        }
    }

};