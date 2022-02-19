class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int longest = 0;
        int startIndex = 0;
        for(int i = 0; i < s.length(); ++i){
            char ch = s[i];
            if(lastSeen.find(ch) != lastSeen.end())
                startIndex = max(startIndex, lastSeen[ch] + 1);
            lastSeen[ch] = i;
            longest = max(longest, i - startIndex + 1);
        }
        return longest;
    }
};