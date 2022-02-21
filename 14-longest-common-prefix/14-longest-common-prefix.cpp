class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int len = strs.size();
        if(len < 1)
            return prefix;
        for(int i = 0; i < strs[0].size(); ++i){
            for(int j = 0; j < len; ++j){
                if(strs[j][i] != strs[0][i])
                    return prefix;
            }
            prefix += strs[0][i];
        }
        return prefix;
    }
};