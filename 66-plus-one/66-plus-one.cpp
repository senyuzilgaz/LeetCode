class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int index = digits.size()-1;
        int carry = 1;
        int digit = 0;
        while(carry){
            if(index < 0){
                digits.insert(digits.begin(), 1);
                break;
            }
            digit = digits[index] + carry;
            digits[index] = digit % 10;
            carry = digit / 10;
            --index;
        }
        return digits;
    }
};