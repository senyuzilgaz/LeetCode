class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) 
            return false;
        int n = s.length();
        
        int letters[26] = {0};
        for (int i = 0; i < n; i++) { 
            letters[s[i]-'a']++;
            letters[t[i]-'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (letters[i]) 
                return false;
        return true;
    }
};


