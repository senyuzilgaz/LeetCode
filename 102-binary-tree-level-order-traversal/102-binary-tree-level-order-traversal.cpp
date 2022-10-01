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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector< vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        while( !q.empty()){
            vector<int> current;
            int n = q.size();
            for(int i = 0; i < n; ++i){
                TreeNode* front = q.front();
                if(front){
                   current.push_back(front->val);
                    q.push(front->left);
                    q.push(front->right);
                }
                q.pop();
            }
            if(current.size() > 0)
                res.push_back(current);
        }
        
        return res;
        
    }
};