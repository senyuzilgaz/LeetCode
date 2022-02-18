class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int longest = 0;
        int current = 0;
        unordered_map<char, int> lastSeen;
        int startIndex = 0;
        
        if( len < 2)
            return len;
        
        for(int i = 0; i < len; ++i){
            char ch = s[i];
            if(lastSeen.find(ch) != lastSeen.end()){
                startIndex = max(startIndex, lastSeen[ch] + 1);
            }
            longest = max(longest, i + 1 - startIndex);
            lastSeen[ch] = i;
        }
        
         return longest;
    }
};