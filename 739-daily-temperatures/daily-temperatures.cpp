class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        vector<int> res(temp.size(), 0);
        stack<int> st;
        for (int i = temp.size() - 1; i >= 0; --i){
            while (!st.empty()) {
                int top = st.top();
                if(temp[top] <= temp[i]) {
                    st.pop();
                    continue;
                }
                
                res[i] = top - i;
                break;
            }
            st.push(i);
        }

        return res;
    }
};