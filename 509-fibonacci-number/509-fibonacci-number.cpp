class Solution {
public:
    int fib(int n) {
        int a = 1, b = 1;
        for(int i = 3; i <= n; ++i){
            int temp = b;
            b = a + b;
            a = temp;
        }
        return n == 0 ? 0 : b;
    }
};