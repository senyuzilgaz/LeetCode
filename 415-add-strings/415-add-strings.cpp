class Solution {
public:
    string addStrings(string num1, string num2) {
        string result;
        int c1 = num1.length()-1, c2 = num2.length()-1;
        int offset = 0;
        int digit = 0;
        while(c1 >= 0 || c2 >=0 || offset !=0){
            if(c1 >= 0)
                digit += num1[c1] - '0';
            if(c2 >= 0)
                digit += num2[c2] - '0';
            digit += offset;
            offset = digit / 10;
            digit %= 10;
            result += digit + '0';
            --c1;
            --c2;
            digit = 0;
        }
        reverse(result.begin(), result.end());
        return result;        
    }
};