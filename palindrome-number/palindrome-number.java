class Solution {
public boolean isPalindrome(int x) {
    if(x < 0 || (x != 0 && x % 10 == 0)){
        return false;
    }
    int t = x;
    int res = 0;
    while(t > 0){
        res = res * 10 + t % 10;
        t = t / 10;
    }
    return res == x;
}
}