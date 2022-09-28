class Solution {
public:
    bool isSubsequence(string s, string t) {
        int subLength = 0;
        for(int i = 0; i < t.size(); ++i){
            if(t[i] == s[subLength])
                ++subLength;
        }
        
        return subLength == s.size();
    }
};