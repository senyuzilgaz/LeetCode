class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        helper("", 0, 0, n, result);
        return result;
    }
    
    void helper(string str, int openingCount, int closingCount,
                int n, vector<string> &result){
        if(str.length() == n*2){
            result.push_back(str);
            return;
        }
        if(openingCount == n){
            helper(str + ")", openingCount, closingCount + 1, n, result);
        }
        else if(openingCount == closingCount){
            helper(str + "(", openingCount + 1, closingCount, n, result);
        }
        else if(openingCount < n && openingCount != closingCount){
            helper(str + "(", openingCount + 1, closingCount, n, result);
            helper(str + ")", openingCount, closingCount + 1, n, result);
        }
    }
};