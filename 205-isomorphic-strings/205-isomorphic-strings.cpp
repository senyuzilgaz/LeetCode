class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) 
            return false;
        
        unordered_map<char,char> charMap;
        unordered_map<char,bool> isUsed;
        for(int i = 0; i < t.size(); ++i)
        {
            if(charMap.find(s[i]) == charMap.end()){ 
                if(isUsed[t[i]])
                    return false;
                charMap[s[i]]  = t[i];
                isUsed[t[i]] = true;
            }
            else if(charMap[s[i]] != t[i])
                return false;
        }
        
        return true;
    }
};