class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFar = INT_MAX;
        int maxSoFar = 0;
        for(int i = 0; i < prices.size(); ++i){
            minSoFar = min(minSoFar, prices[i]);
            maxSoFar = max(maxSoFar, prices[i] - minSoFar);
        }
        return maxSoFar;
    }
};