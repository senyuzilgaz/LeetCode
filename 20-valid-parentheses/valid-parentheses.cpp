class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> closing = {{')', '('},
                                         {']', '['},
                                         {'}', '{'}};

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else if (ch == ')' || ch == '}' || ch == ']'){
                if (st.empty() || st.top() != closing[ch])
                    return false;
                //stacks top is the relevant opening bracelet
                st.pop();
            }
        }

        return st.empty();
    }
};