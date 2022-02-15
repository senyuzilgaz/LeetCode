class Solution {
public:
    bool isAnagram(string s, string t) {
        return Hash(s) == Hash(t);
    }
    
    int Hash(string str)
    {
        sort(str.begin(),str.end());
        long hash = 0 , mult = 1;
        for(char ch : str)
        {
            hash += ch*mult*mult;
            mult += 1;
        }
        return hash;    
    }
};