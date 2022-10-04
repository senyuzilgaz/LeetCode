class Solution {
public:
    int climbStairs(int n) {
       if(n == 0)
           return 0;
        if(n == 1)
            return 1;
        if(n == 2)
            return 2;
        int first = 1, second = 2;
        int max;
        for(int i = 3; i <= n; ++i){
            max = first + second;
            first = second;
            second = max;
        }
        
        return max;
    }
};