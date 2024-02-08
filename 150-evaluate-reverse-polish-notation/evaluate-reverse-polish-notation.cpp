class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        unordered_map<string,int> operators = {{"+",0},
                                               {"-",1},
                                               {"*",2},
                                               {"/",3}};
        for (string token : tokens) {
            if (operators.find(token) != operators.end()) {
                int n2 = nums.top();
                nums.pop();
                int n1 = nums.top();
                nums.pop();

                int result = eval(n1, n2, operators[token]);
                nums.push(result);
            } else {
                nums.push(stoi(token));
            }
        }

        return nums.top();
    }

    int eval (int n1, int n2, int oper) {
        switch (oper) {
            case 0: return n1 + n2;
            case 1: return n1 - n2;
            case 2: return n1 * n2;
            case 3: return n1 / n2;
            default: return n1 + n2;
        }
    }
};