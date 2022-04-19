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
    
    bool isLeaf(TreeNode* node){
        return (node -> left == nullptr && node -> right == nullptr);
    }
    
    bool hasPath(TreeNode* node, int pathSum, int target){
        if(node == nullptr)
            return false;
        
        int val = node -> val;
        
        if(pathSum + val == target && isLeaf(node))
            return true;
        
        return hasPath(node -> left, pathSum + val, target) 
                || hasPath(node -> right, pathSum + val, target);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        return hasPath(root, 0, targetSum);
    }

};