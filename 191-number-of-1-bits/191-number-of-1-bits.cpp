class Solution {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        while(n > 0){
            if(n&1)
                result += 1;
            n = n >> 1;
        }
        return result;
    }
};