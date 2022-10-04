/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *current = root, *res;
        while(current){
            if ((current -> val >= p->val && current -> val <= q-> val)
                 || (current -> val <= p->val && current -> val >= q-> val))
                return current;
            if(current -> val > q -> val)
                current = current -> left;
            else
                current = current -> right;
        }
        return current;
    }
};