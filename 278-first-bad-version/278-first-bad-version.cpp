// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0;
        int right = n;
        while(left < right - 1){
            int mid = left + (right - left) / 2;
            bool isBad = isBadVersion(mid);
            if(isBad)
                right = mid;
            else
                left = mid;
            
        }
        return right;
    }
};