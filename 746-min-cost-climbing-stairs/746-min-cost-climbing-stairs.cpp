class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n == 0 || n == 1)
            return 0;
        if(n == 2)
            return cost[0] >= cost[1] ? cost[1] : cost[0];
        
        vector<int> minList = {cost[0], cost[1]};
        
        for(int i = 2; i < n; ++i){
            int res = cost[i] + min(minList[i-1], minList[i-2]);
            minList.push_back(res);
        }
        int x = minList.size()-1;

        return x == 0 ? minList[0]: min(minList[x], minList[x-1]);
    }
};