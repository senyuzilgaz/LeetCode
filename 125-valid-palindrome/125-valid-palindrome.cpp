class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length();
        while(left < right){
            while(!isalnum(s[left]) && left < right)
                ++left;
            while(!isalnum(s[right]) && left < right)
                --right;
            if(tolower(s[right]) != tolower(s[left]))
                return false;
            ++left;
            --right;
        }
        return true;
    }
};