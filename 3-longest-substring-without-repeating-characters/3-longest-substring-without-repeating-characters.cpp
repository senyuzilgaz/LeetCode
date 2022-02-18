class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        vector<int> longest = {0, 1};
        unordered_map<char, int> lastSeen;
        int startIndex = 0;
        
        if( len < 2)
            return len;
        
        for(int i = 0; i < len; ++i){
            char ch = s[i];
            if(lastSeen.find(ch) != lastSeen.end()){
                startIndex = max(startIndex, lastSeen[ch] + 1);
            }
            if(longest[1] - longest[0] < i + 1 - startIndex){
                longest = {startIndex, i + 1};
            }
            lastSeen[ch] = i;
        }
        
         return longest[1] - longest[0];
    }
};