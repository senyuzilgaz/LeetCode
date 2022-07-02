class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        bool flag = false;
        int damnSon = 0;
        for(int i = 0; i < strs[0].size(); ++i){
            for(int j = 0; j < strs.size(); ++j){
                if(strs[j][i] != strs[0][i]){
                    flag = true;
                    break;
                }
                damnSon = j;    
            }
            if(flag)
                break;
            res += strs[damnSon][i];
        }
        return res;
    }
};