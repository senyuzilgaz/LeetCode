class Solution {
public:
    int hammingDistance(int x, int y) {
        int distance = 0;
          while(x > 0 || y > 0){
              int first = x&1;
              int second = y&1;
              if(first != second)
                  distance += 1;
              x = x >> 1;
              y = y >> 1;
          }
        return distance;
    }
};