class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helpo(0, 0, n, "", res);
        return res;;
    }

    void helpo(int open, int closed, int n, string current, vector<string> & res) {
        if(closed == n) {
            res.push_back(current);
            return;
        }
        if(open == closed) {
            helpo(open + 1, closed, n, current + "(", res);
        } else if (open < n && open > closed) {
            helpo(open + 1, closed, n, current + "(", res);
            helpo(open, closed + 1, n, current + ")", res);
        } else if (open == n) {
            helpo(open, closed + 1, n, current + ")", res);
        }
    }
};