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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> current;
            for(int i = 0; i < n; ++i){
                Node* front = q.front();
                q.pop();
                if(!front)
                    continue;
                current.push_back(front->val);
                for(auto x : front -> children)
                    q.push(x);
                
            }
            if(current.size() > 0){
                res.push_back(current);
            }
        }
        return res;
    }
};