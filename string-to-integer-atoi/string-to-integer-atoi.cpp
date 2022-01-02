class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long result = 0;
        int i = 0;
        
        while (s[i] == ' ')
            i++;

        for (int temp = i; i < s.length(); i++)
        {
            if (s[i] == '-' && i == temp)
                sign = -1;
            else if (s[i] == '+' && i == temp);
            else if (std::isdigit(s[i]))
            {
                result += s[i] - '0';
                if (i < s.length() - 1 && std::isdigit(s[i + 1]))
                    result *= 10;
                if (result * sign >= INT_MAX)
                    return INT_MAX;
                else if (result * sign <= INT_MIN)
                    return INT_MIN;
            }
            else
                return static_cast<int>(result) * sign;
        }
        return static_cast<int>(result) * sign;
    }
};
