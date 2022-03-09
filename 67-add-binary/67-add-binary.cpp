class Solution {
public:
    string addBinary(string a, string b) {
        int first = a.length()-1;
        int second = b.length()-1;
        int offset = 0;
        string result;
        while(first >= 0 || second >= 0 || offset != 0){
            if(first >= 0){
                offset += a[first] - '0';
                --first;
            }
                
            if(second >= 0){
                offset += b[second] - '0';
                --second;
            }
            result += (offset%2 + '0');
            offset /= 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};