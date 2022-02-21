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
        vector<vector<int>> result;
        if(root == nullptr)
            return result;
        queue<TreeNode*> firstQueue, secondQueue;
        firstQueue.push(root);
        int level = 0;
        while(!firstQueue.empty()){
            result.resize(level + 1);
            int count = firstQueue.size();
            for(int i = 0; i < count; ++i){
                TreeNode* node = firstQueue.front();
                firstQueue.pop();
                result[level].push_back(node -> val);
                if(node -> left)
                    secondQueue.push(node -> left);
                if(node -> right)
                    secondQueue.push(node -> right);
            }
            ++level;
            swap(firstQueue, secondQueue);
        }
        return result;
        
    }
};