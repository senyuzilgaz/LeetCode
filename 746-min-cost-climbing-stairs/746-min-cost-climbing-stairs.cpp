class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n == 0 || n == 1)
            return 0;

        int first = cost[0], second = cost[1];        
        for(int i = 2; i < cost.size(); ++i){
            int res = cost[i] + min(first, second);
            first = second;
            second = res;
        }
        return min(first, second);
    }
};