class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenHaystack = haystack.length();
        int lenNeedle = needle.length();
        bool flag = 0;
        
        if(lenNeedle == 0)
            return 0;
        if(lenNeedle > lenHaystack)
            return -1;
        int left = 0;
        int right = lenNeedle - 1;
        
        while(right < lenHaystack){
            if(haystack[left] == needle[0]){
                for(int i = left + 1; i <= right; ++i){
                    if(needle[i - left] != haystack[i]){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    return left;
                flag = 0;
            }
            ++left;
            ++right;
        }
        
        return -1;
    }
};