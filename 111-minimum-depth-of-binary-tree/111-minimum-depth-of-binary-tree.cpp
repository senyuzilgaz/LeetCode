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
    int minDepth(TreeNode* root, int depth = 0) {
        if(root == nullptr)
            return depth;
        int left = minDepth(root -> left, depth + 1);
        int right = minDepth(root -> right, depth + 1);
        if(left == depth + 1)
            return right;
        if(right == depth + 1)
            return left;
        return min(left, right);
    }
};