class Solution {
public:
    int longestPalindrome(string s) {
        bool hasOdd = false;
        unordered_map<char, int> letters;
        int length = 0;
        
        for(int i = 0; i < s.size(); ++i)
            ++letters[s[i]];
        
        for(auto ch : letters){
            int x = ch.second;
            if(x % 2 == 0)
                length += x;
            else{
                length += x - 1;
                hasOdd = true;
            }
        }
        
        return hasOdd? length + 1 : length;
    }
};