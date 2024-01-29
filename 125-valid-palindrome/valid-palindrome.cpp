class Solution {
public:
    bool isPalindrome(string s) {
        s = processString(s);
        int first = 0;
        int last = s.length() - 1;

        while (first < last)
            if (s[first++] != s[last--])
                return false;

        return true;
    }

    string processString(string s) {
        string res = "";
        for (int i = 0; i < s.size(); ++i) {
            if (!isalnum(s[i]))
                continue;
                
            res += tolower(s[i]);   
        }
        return res;
    }
};