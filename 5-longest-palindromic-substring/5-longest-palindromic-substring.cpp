class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        int maxLength = 0;
        string result;
        if(len < 2)
            return s;
        
        for(int i = 1; i < len; ++i){
            string substring = expand(s, i - 1, i);
            if(substring.length() > maxLength){
                maxLength = substring.length();
                result = substring;
            }
            substring = expand(s, i - 1, i + 1);
            if(substring.length() > maxLength){
                maxLength = substring.length();
                result = substring;
            }
        }
        return result;
    }
    
    string expand(string s, int left, int right){
        int len = s.length();
        while(left >= 0 && right < len){
            if(s[left] != s[right])
                break;
            --left;
            ++right;
        }
        return s.substr(left+1, right - left - 1);
    }
};