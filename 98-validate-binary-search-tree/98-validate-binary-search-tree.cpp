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
        return pushTree(root);
    }
    
    bool pushTree(TreeNode* root){
        TreeNode* prev = NULL;
        if(!root)
            return true;
        stack<TreeNode*> sta;
        TreeNode *current = root;
    
        while(current || !sta.empty()){
            while(current){
                sta.push(current);
                current = current -> left;
            }
            current = sta.top();
            sta.pop();
            if(prev != NULL and current -> val <= prev -> val)
                return false;
            prev = current;
            current = current -> right;
                
        }
        return true;
    }

};