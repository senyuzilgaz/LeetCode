class Solution {
public:
    unordered_map<char,char> pair = { {'(', ')'}, {'{', '}'}, {'[', ']'} };
    bool isValid(string s) {
        string opening = "([{";
        string closing = ")]}";
        stack<char> Stack;
        for(char ch : s){
            if (opening.find(ch) != string ::npos)
                Stack.push(ch);
            else if(closing.find(ch) != string::npos){
                if(Stack.empty())
                    return false;
                char topOfStack = Stack.top();
                Stack.pop();
                if(pair[topOfStack] != ch)
                    return false;
            }
        }
        return Stack.empty();
    }
};